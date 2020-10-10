/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:26:30 by qcraghas          #+#    #+#             */
/*   Updated: 2020/10/10 18:16:24 by qcraghas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <errno.h>
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

	printf("%s>>>>>FT_STRCPY<<<<<%s\n", _RED_, _DEF_);
	
	printf("%s---empty string 1---%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_empty, src_reg));
	dst_empty = strdup("");
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_empty, src_reg));
	
	printf("%s---empty string 2---%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_reg, src_empty));
	dst_reg = strdup("destination");
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_reg, src_empty));
	
	dst_empty = strdup("");
	dst_reg = strdup("destination");
	
	printf("%s---empty strings---%s\n", _BLU_, _DEF_);
	
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_empty, src_empty));
	dst_empty = strdup("");
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_empty, src_empty));

	printf("%s----strings----%s\n", _BLU_, _DEF_);
	printf("%sLIBASM   %s%s\n", _GRN_, _DEF_, ft_strcpy(dst_reg, src_reg));
	dst_reg = strdup("destination");
	printf("%sSTANDART %s%s\n\n", _YEL_, _DEF_, strcpy(dst_reg, src_reg));

	dst_empty = strdup("");
	dst_reg = strdup("destination");



	
	// s = ft_strcpy(s, "hell");
	// printf("%s\n", s);
	// s = strcpy(s, "hell");
	// printf("%s\n", s);
	printf("%s>>>>>FT_STRCMP>>>>>%s\n", _RED_, _DEF_);
	char *s1 = "aaaa"; char *s2 = "aaaa";
	printf("ftstrcmp %d\n", ft_strcmp(s1, s2));
	printf("__strcmp %d\n", strcmp(s1, s2));
	s1 = ""; s2 = "a";
	printf("ftstrcmp %d\n", ft_strcmp(s1, s2));
	printf("__strcmp %d\n", strcmp(s1, s2));
	s1 = "aaaa"; s2 = "aaa";
	printf("ftstrcmp %d\n", ft_strcmp(s1, s2));
	printf("__strcmp %d\n", strcmp(s1, s2));
	// s1 = NULL; s2 = "aaa";
	// printf("strcmp %d\n", strcmp(s2, s1));
	// printf("ftstrcmp %d\n", ft_strcmp(s1, s2));
	printf("%s>>>>>FT_STRDUP<<<<<%s\n", _RED_, _DEF_);
	printf("ftstrdup %s\n", ft_strdup(""));
	printf("__strdup %s\n", strdup(""));
	printf("ftstrdup %s\n", ft_strdup("don't yell on me"));
	printf("__strdup %s\n", strdup("don't yell on me"));
	printf("ftstrdup %s\n", ft_strdup(NULL));
	// printf("__strdup %s\n", strdup(NULL));
	printf("%s>>>>>FT_WRITE<<<<<%s\n", _RED_, _DEF_);
	char *s3 = "a string\n";
	ft_write(1, s3, ft_strlen(s3));
	write(1, s3, strlen(s3));
	char *s4 = NULL;
	char *s5 = NULL;
	int i;
	int j = 0;
	// ft_write(1, s4, ft_strlen(s4));
	// write(1, s4, strlen(s4));
	printf("%s>>>>>FT_READ<<<<<%s\n", _RED_, _DEF_);
	i = ft_read(3, s4, 0);
	printf("errno %d\n", errno);
	j = read(3, s5, 0);
	printf("errno %d\n", errno);
	printf("__i__j__ %d, %d\n", i, j);
	i = ft_write(1, NULL, ft_strlen(s4));
	printf("errno %d\n", errno);
	j = write(1, NULL, ft_strlen(s5));
	printf("errno %d\n", errno);
	printf("__i__j__ %d, %d\n", i, j);
}