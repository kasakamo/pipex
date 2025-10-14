/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kasakamo <kasakamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 21:47:16 by kasakamo          #+#    #+#             */
/*   Updated: 2025/10/14 19:23:11 by kasakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include "libft.h"

void	child1(int *pipefd, char **av, char **envp);
void	child2(int *pipefd, char **av, char **envp);
void	exec_child(char *cmd_str, char **envp);
char	**parse_cmd(char *cmd_str);
char	*resolve_path(char *cmd_name, char **envp);

char	*get_cmd_path(char *cmd, char **envp);

void	ft_free_split(char **arr);

#endif
