	.global _Z3sumii
_Z3sumii:
	mov	r2, r0
1:
	add	r2, #1
	add	r0, r2
	cmp	r2, r1
	ble	1b
	sub	r0, r2
	bx	lr
	
	
