	.global _Z3sumii
_Z3sumii:
	mov	r0, #0
	mov	r1, #0
	mov	r2, #1
1:
	add	r0, r2	
	add	r2, r2, #1	
	cmp	r0, r1
	blt	lb
	bx	lr
	
