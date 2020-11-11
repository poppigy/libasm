	global	_ft_write
	extern	___error

_ft_write:
	xor		rax, rax
	mov		rax, 0x2000004
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
