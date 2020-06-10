/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antomart <antomart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 08:41:33 by antomart          #+#    #+#             */
/*   Updated: 2020/06/10 16:26:21 by antomart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "libasm.h"

#define BUFFER_SIZE 512

int	test0(void)
{
	int		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = 0;
	i = 0;
	printf("\n--strcmp\n");
	printf("`%s`:`%s` = %d (%d)\n", "", "", ft_strcmp("", ""), strcmp("", ""));
	printf("`%s`:`%s` = %d (%d)\n", "test", "test", ft_strcmp("test", "test"),
		strcmp("test", "test"));
	printf("`%s`:`%s` = %d (%d)\n", "test", "", ft_strcmp("test", ""),
	strcmp("test", ""));
	return (0);
}

int	test1(void)
{
	int		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf("`%s`:`%s` = %d (%d)\n", "", "test", ft_strcmp("", "test"),
		strcmp("", "test"));
	printf("`%s`:`%s` = %d (%d)\n", "test3", "test", ft_strcmp("test3", "test"),
		strcmp("test3", "test"));
	printf("\n--strcpy\n");
	printf("`%s` (`toto`)\n", ft_strcpy(buffer, "toto"));
	printf("`%s` (empty)\n", ft_strcpy(buffer, ""));
	printf("-done\n");
	printf("\n--write\n");
	printf("%ld (%s%ld)\n", ft_write(STDOUT_FILENO, "toto", 4L), "toto", 4L);
	return (0);
}

int	test2(void)
{
	int		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf("%ld (%s%ld)\n", ft_write(STDOUT_FILENO, "totototo", 8L),
		"totototo", 8L);
	printf("-done\n");
	printf("\n--read (Makefile)\n");
	r = ft_read(-1, buffer, 50);
	printf("`%s`:%ld\n", buffer, r);
	printf("-done\n");
	printf("\n--ft_strdup\n");
	tmp2 = ft_strdup("toto");
	tmp = ft_strdup("toto");
	printf("`%s` (`%s`)\n", tmp, "toto");
	free(tmp);
	tmp = NULL;
	free(tmp2);
	return (0);
}

int	test3(void)
{
	int		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	tmp = ft_strdup("");
	printf("`%s` (`%s`)\n", tmp, "");
	free(tmp);
	tmp = NULL;
	return (0);
}

int	main(void)
{
	int		i;
	long	r;
	char	buffer[100];
	char	*tmp;
	char	*tmp2;

	r = 0;
	i = 0;
	while (i < 100)
		buffer[i++] = 0;
	printf("\n--strlen\n");
	printf("`%s` = %zu (%d)\n", "", ft_strlen(""), (int)strlen(""));
	printf("`%s` = %zu (%d)\n", "prueba", ft_strlen("prueba"),
		(int)strlen("prueba"));
	printf("`%s` = %d (%d)\n", "023456789acdf",
		(int)ft_strlen("023456789abdf"), (int)strlen("023456789acdf"));
	printf("-done\n");
	test0();
	test1();
	test2();
	test3();
	return (0);
}
