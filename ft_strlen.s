; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_strlen.s                                        :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

		global _ft_strlen

		section .text
_ft_strlen:
		xor	rax, rax
		test rdi, rdi
		jz	_return
_while:
		cmp	byte[rdi + rax], 0
		je	_return
		inc	rax
		jmp	_while
_return:
		ret