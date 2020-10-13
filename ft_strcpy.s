; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_strcpy.s                                        :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

		global _ft_strcpy

		section .text
_ft_strcpy:
		xor	rax, rax
_while:
		cmp	byte[rsi + rax], 0
		je	_return
		mov bl, byte[rsi + rax]
		mov byte[rdi + rax], bl
		inc	rax
		jmp	_while
_return:
		mov byte[rdi + rax], 0
		mov rax, rdi
		ret