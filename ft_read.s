; ----------------------------------------------------------------------------
;                                                                             
;                                                         :::      ::::::::   
;    ft_read.s                                          :+:      :+:    :+:   
;                                                     +:+ +:+         +:+     
;    By: qcraghas <qcraghas@student.42.fr>          +#+  +:+       +#+        
;                                                 +#+#+#+#+#+   +#+           
;    Created: 2020/10/08 15:21:52 by qcraghas          #+#    #+#             
;    Updated: 2020/10/08 15:23:20 by qcraghas         ###   ########.fr       
;                                                                             
; ----------------------------------------------------------------------------

	global	_ft_read
	extern	___error

_ft_read:
	xor		rax, rax
	mov		rax, 0x2000003
	syscall
	jb		_return
	ret
_return:
	push	rax
	call	___error
	pop		rbx
	mov		[rax], rbx
	mov		rax, -1
	ret