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
