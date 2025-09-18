/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 22:02:53 by kasakamo          #+#    #+#             */
/*   Updated: 2025/09/18 15:32:11 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child1(int *pipefd, char **av, char **envp)
{
	int		fd;
	char	*cmd_path;
	char	**cmd;

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open infile\n");
		exit (1);
	}
	dup2(fd, STDIN_FILENO);
	dup2(pipefd[1], STDOUT_FILENO);
	close(fd);
	close(pipefd[0]);
	close(pipefd[1]);
	cmd = ft_split(av[2], ' ');
	cmd_path = get_cmd_path(cmd[0], envp);
	if (!cmd_path)
	{
		ft_putendl_fd("command not found\n", 2);
		ft_free_split(cmd);
		exit (1);
	}
	execve(cmd_path, cmd, envp);
	perror("execve child1\n");
	ft_free_split(cmd);
	free(cmd_path);
	exit (1);
}

void	child2(int *pipefd, char **av, char **envp)
{
	int		fd;
	char	*cmd_path;
	char	**cmd;

	fd = open(av[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("open infile\n");
		exit (1);
	}
	dup2(pipefd[0], STDIN_FILENO);
	dup2(fd, STDOUT_FILENO);
	close(fd);
	close(pipefd[0]);
	close(pipefd[1]);
	cmd = ft_split(av[3], ' ');
	cmd_path = get_cmd_path(cmd[0], envp);
	if (!cmd_path)
	{
		ft_putendl_fd("command not found\n", 2);
		ft_free_split(cmd);
		exit (1);
	}
	execve(cmd_path, cmd, envp);
	perror("execve child2\n");
	ft_free_split(cmd);
	free(cmd_path);
	exit (1);
}
