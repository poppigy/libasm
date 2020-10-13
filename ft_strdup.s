; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_strdup.s                                        :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

	global	_ft_strdup
	extern	_malloc
	extern	_ft_strlen
	extern	_ft_strcpy

	section	.text
_ft_strdup:
	push	rdi
	call	_ft_strlen
	call	_malloc
	cmp		rax, 0
	je		_return
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	jmp		_return
_return:
	ret