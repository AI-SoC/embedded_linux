	.arch armv6
	.eabi_attribute 28, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 6
	.eabi_attribute 34, 1
	.eabi_attribute 18, 4
	.file	"main.c"
	.text
	.global	g1
	.bss
	.align	2
	.type	g1, %object
	.size	g1, 4
g1:
	.space	4
	.section	.rodata
	.align	2
.LC0:
	.ascii	"a is %d\012\000"
	.align	2
.LC1:
	.ascii	"g1 is %d\012\000"
	.text
	.align	2
	.global	main
	.arch armv6
	.syntax unified
	.arm
	.fpu vfp
	.type	main, %function
main:
	@ args = 0, pretend = 0, frame = 0
	@ frame_needed = 1, uses_anonymous_args = 0
	push	{fp, lr}
	add	fp, sp, #4
	mov	r1, #14
	ldr	r0, .L3
	bl	printf
	bl	incr
	ldr	r3, .L3+4
	ldr	r3, [r3]
	mov	r1, r3
	ldr	r0, .L3+8
	bl	printf
	mov	r3, #0
	mov	r0, r3
	pop	{fp, pc}
.L4:
	.align	2
.L3:
	.word	.LC0
	.word	g1
	.word	.LC1
	.size	main, .-main
	.ident	"GCC: (Raspbian 10.2.1-6+rpi1) 10.2.1 20210110"
	.section	.note.GNU-stack,"",%progbits
