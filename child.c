/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:02:53 by kasakamo          #+#    #+#             */
/*   Updated: 2025/10/14 20:41:45 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char	*resolve_path(char *cmd_name, char **envp)
{
	char	*path;

	if (ft_strchr(cmd_name, '/'))
		path = cmd_name;
	else
		path = get_cmd_path(cmd_name, envp);
	if (!path)
	{
		ft_putendl_fd("command not found", 2);
		exit (127);
	}
	if (access(path, X_OK) == -1)
	{
		perror(path);
		exit(126);
	}
	return (path);
}

char	**parse_cmd(char *cmd_str)
{
	char		**cmd;

	cmd = ft_split(cmd_str, ' ');
	if (!cmd || !cmd[0])
	{
		ft_free_split(cmd);
		exit (127);
	}
	return (cmd);
}

void	exec_child(char *cmd_str, char **envp)
{
	char		**cmd;
	char		*path;

	cmd = parse_cmd(cmd_str);
	path = resolve_path(cmd[0], envp);
	execve(path, cmd, envp);
	perror("execve");
	ft_free_split(cmd);
	exit (127);
}

void	child1(int *pipefd, char **av, char **envp)
{
	int		fd;

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open infile");
		exit (1);
	}
	dup2(fd, STDIN_FILENO);
	dup2(pipefd[1], STDOUT_FILENO);
	close(fd);
	close(pipefd[0]);
	close(pipefd[1]);
	exec_child(av[2], envp);
}

void	child2(int *pipefd, char **av, char **envp)
{
	int		fd;

	fd = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("open outfile");
		exit (1);
	}
	dup2(pipefd[0], STDIN_FILENO);
	dup2(fd, STDOUT_FILENO);
	close(fd);
	close(pipefd[0]);
	close(pipefd[1]);
	exec_child(av[3], envp);
}
