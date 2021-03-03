	.global main
main:
	mov	r0, #5
1:
	add	r0, r0, #3
	cmp	r0, #35
	bne	1b
	bx	lr
