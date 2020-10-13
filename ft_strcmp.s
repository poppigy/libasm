; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_strcmp.s                                        :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

	global _ft_strcmp

	section .text
_ft_strcmp:
	xor	rax, rax
	xor r8, r8
	xor r9, r9
	test rdi, rdi
	jz	_return
	test rsi, rsi
	jz	_return
_while:
	cmp byte[rsi + rax], 0
	je	_end_compare
	cmp byte[rdi + rax], 0
	je _end_compare
	jmp _compare
_compare:
	xor r8, r8
	xor r9, r9
	mov	r8b, byte[rsi + rax]
	mov	r9b, byte[rdi + rax]
	sub r9, r8
	cmp	r9, 0
	jnz	_return
	inc rax
	jmp _while
_end_compare:
	xor r8, r8
	xor r9, r9
	mov	r8b, byte[rsi + rax]
	mov	r9b, byte[rdi + rax]
	sub r9, r8
	jmp	_return
_return:
	xor	rax, rax
	mov	rax, r9
	ret