/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:26:30 by qcraghas          #+#    #+#             */
/*   Updated: 2020/10/11 18:32:00 by qcraghas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>
#define _DEF_	"\x1B[0m"
#define _RED_	"\x1B[31m"
#define _GRN_	"\x1B[32m"
#define _YEL_	"\x1B[33m"
#define _BLU_	"\x1B[34m"
#define _MAG_	"\x1B[35m"
#define _CYN_	"\x1B[36m"
#define _WHT_	"\x1B[37m"

int	main()
{
	//FT_STRLEN
	printf("%s>>>>>FT_STRLEN<<<<<%s\n", _RED_, _DEF_);
	printf("%s---empty string----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%zu\n", _GRN_, _DEF_, ft_strlen(""));
	printf("%sSTANDART %s%zu\n\n", _YEL_, _DEF_, strlen(""));
	printf("%s---regular string---%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%zu\n", _GRN_, _DEF_, ft_strlen("LibASM project at 21"));
	printf("%sSTANDART %s%zu\n\n", _YEL_, _DEF_, strlen("LibASM project at 21"));
	printf("%s----long string----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%zu\n", _GRN_, _DEF_, ft_strlen("Summary: The aim of this project is to get familiar with assembly language."));
	printf("%sSTANDART %s%zu\n\n", _YEL_, _DEF_, strlen("Summary: The aim of this project is to get familiar with assembly language."));
	char *dst_empty = strdup("");
	char *src_empty = strdup("");
	char *dst_reg = strdup("destination");
	char *src_reg = strdup("source");

	//FT_STRCPY
	printf("%s>>>>>FT_STRCPY<<<<<%s\n", _RED_, _DEF_);
	printf("%s----empty dest----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_empty, src_reg));
	dst_empty = strdup(""); //reset
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_empty, src_reg));
	printf("%s---empty source---%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_reg, src_empty));
	dst_reg = strdup("destination"); //reset
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_reg, src_empty));
	dst_empty = strdup(""); //reset
	dst_reg = strdup("destination");
	printf("%s----both empty----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_empty, src_empty));
	dst_empty = strdup(""); //reset
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_empty, src_empty));
	printf("%s----reg strings----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_reg, src_reg));
	dst_reg = strdup("destination"); //reset
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_reg, src_reg));
	dst_reg = strdup("This is a destination string I want to use");
	src_reg = strdup("This is a source string I want to copy");
	printf("%s----long strings----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_reg, src_reg));
	dst_reg = strdup("This is a destination string I want to use"); //reset
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_reg, src_reg));
	dst_reg = strdup("destination");

	//FT_STRCMP
	printf("%s>>>>>FT_STRCMP>>>>>%s\n", _RED_, _DEF_);
	char *same1 = "similar"; char *same2 = "similar";
	char *empty1 = ""; char *empty2 = "";
	char *reg1 = "Regular string first arg"; char *reg2 = "Regular string second arg";
	char *long1 = "Long string STRCMP check. This string could be longer";
	char *long2 = "Long string STRCMP check. This string could be shorter";
	printf("%s----first empty----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(empty1, reg2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(empty1, reg2));
	printf("%s----second empty----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(reg1, empty2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(reg1, empty2));
	printf("%s-----both empty-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(empty1, empty2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(empty1, empty2));
	printf("%s-----equal-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(same1, same2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(same1, same2));
	printf("%s-----regular-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(reg1, reg2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(reg1, reg2));
	printf("%s-----reg reverse-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(reg2, reg1));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(reg2, reg1));
	printf("%s-----long-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(long1, long2));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(long1, long2));
	printf("%s-----long reverse-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%d\n", _GRN_, _DEF_, ft_strcmp(long2, long1));
	printf("%sSTANDART %s%d\n\n", _YEL_, _DEF_, strcmp(long2, long1));

	//FT_WRITE
	printf("%s>>>>>FT_WRITE<<<<<%s\n", _RED_, _DEF_);

	char *ft_w = "LIBASM stdout ft_write\n";
	char *w = "STANDART stdout write\n\n";

	printf("%s----STDOUT----%s\n", _BLU_, _DEF_);
	ft_write(1, ft_w, ft_strlen(ft_w));
	write(1, w, ft_strlen(w));

	
	int fd = open("file.txt", O_RDWR | O_APPEND);
	ft_write(fd, "LIBASM ft_write\n", ft_strlen("LIBASM ft_write\n"));
	write(fd, "STANDART write\n", strlen("STANDART write\n"));
	
	printf("%s----OPEN FD----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, "check file.txt");
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, "check file.txt");
	close(fd);
	
	printf("%s----WRONG FD----%s\n", _BLU_, _DEF_);
	ft_write(fd, "LIBASM ft_write\n", ft_strlen("LIBASM ft_write\n"));
	printf("%sLIBASM   %serrno %d\n", _GRN_, _DEF_, errno);
	write(fd, "STANDART write\n", strlen("STANDART write\n"));
	printf("%sSTANDART %serrno %d\n\n", _YEL_, _DEF_, errno);
	errno = 0;

	int i; int j;
	char *s4 = calloc(1, 20); char *s5 = calloc(1, 20);
	//FT_READ
	printf("%s>>>>>FT_READ<<<<<%s\n", _RED_, _DEF_);
	
	printf("%s-----STDIN-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM  %s ", _GRN_, _DEF_);
	i = ft_read(0, s4, 20);
	printf("read %d: string: %s", i, s4);
	printf("%sLIBASM   %serrno %d\n", _GRN_, _DEF_, errno);
	printf("%sSTANDART %s", _YEL_, _DEF_);
	j = read(0, s5, 20);
	printf("read %d: string: %s", j, s5);
	printf("%sSTANDART %serrno %d\n\n", _YEL_, _DEF_, errno);
	
	free(s4); free(s5);
	s4 = calloc(1, 20); s5 = calloc(1, 20);
	
	fd = open("file.txt", O_RDONLY);
	printf("%s----READ FD----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s ", _GRN_, _DEF_);
	i = ft_read(fd, s4, 20);
	printf("string: %s, errno: %d\n", s4, errno);
	printf("%sSTANDART %s ", _YEL_, _DEF_);
	j = read(fd, s5, 20);
	printf("string: %s, errno: %d\n\n", s5, errno);
	close(fd);
	
	free(s4); free(s5);
	s4 = calloc(1, 20); s5 = calloc(1, 20);

	printf("%s----WRONG FD----%s\n", _BLU_, _DEF_);
	ft_read(fd, s4, 20);
	printf("%sLIBASM   %serrno %d\n", _GRN_, _DEF_, errno);
	read(fd, s5, 20);
	printf("%sSTANDART %serrno %d\n\n", _YEL_, _DEF_, errno);

	//FT_STRDUP
	printf("%s>>>>>FT_STRDUP<<<<<%s\n", _RED_, _DEF_);
	printf("%s-----empty-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strdup(""));
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strdup(""));
	printf("%s-----long string-----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strdup("This is a veeeery loooooong string I duplicaaaaaaaaaaaaate"));
	printf("%sSTANDART %s%s\n", _YEL_, _DEF_, strdup("This is a veeeery loooooong string I duplicaaaaaaaaaaaaate"));

}