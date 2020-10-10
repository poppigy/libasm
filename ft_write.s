; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_write.s                                         :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

	global	_ft_write
	extern	___error

_ft_write:
	xor		rax, rax
	mov		rax, 0x2000004
	syscall
	; cmp		rax, 0
	jb		_return
	ret
_return:
	push	rax
	call	___error
	pop		rbx
	mov		[rax], rbx
	mov		rax, -1
	ret