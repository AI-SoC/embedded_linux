
main:     file format elf32-littlearm


Disassembly of section .init:

000102e8 <_init>:
   102e8:	e92d4008 	push	{r3, lr}
   102ec:	eb000023 	bl	10380 <call_weak_fn>
   102f0:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

000102f4 <.plt>:
   102f4:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
   102f8:	e59fe004 	ldr	lr, [pc, #4]	; 10304 <.plt+0x10>
   102fc:	e08fe00e 	add	lr, pc, lr
   10300:	e5bef008 	ldr	pc, [lr, #8]!
   10304:	00010cfc 	.word	0x00010cfc

00010308 <printf@plt>:
   10308:	e28fc600 	add	ip, pc, #0, 12
   1030c:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10310:	e5bcfcfc 	ldr	pc, [ip, #3324]!	; 0xcfc

00010314 <puts@plt>:
   10314:	e28fc600 	add	ip, pc, #0, 12
   10318:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   1031c:	e5bcfcf4 	ldr	pc, [ip, #3316]!	; 0xcf4

00010320 <__libc_start_main@plt>:
   10320:	e28fc600 	add	ip, pc, #0, 12
   10324:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10328:	e5bcfcec 	ldr	pc, [ip, #3308]!	; 0xcec

0001032c <__gmon_start__@plt>:
   1032c:	e28fc600 	add	ip, pc, #0, 12
   10330:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10334:	e5bcfce4 	ldr	pc, [ip, #3300]!	; 0xce4

00010338 <abort@plt>:
   10338:	e28fc600 	add	ip, pc, #0, 12
   1033c:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10340:	e5bcfcdc 	ldr	pc, [ip, #3292]!	; 0xcdc

Disassembly of section .text:

00010344 <_start>:
   10344:	e3a0b000 	mov	fp, #0
   10348:	e3a0e000 	mov	lr, #0
   1034c:	e49d1004 	pop	{r1}		; (ldr r1, [sp], #4)
   10350:	e1a0200d 	mov	r2, sp
   10354:	e52d2004 	push	{r2}		; (str r2, [sp, #-4]!)
   10358:	e52d0004 	push	{r0}		; (str r0, [sp, #-4]!)
   1035c:	e59fc010 	ldr	ip, [pc, #16]	; 10374 <_start+0x30>
   10360:	e52dc004 	push	{ip}		; (str ip, [sp, #-4]!)
   10364:	e59f000c 	ldr	r0, [pc, #12]	; 10378 <_start+0x34>
   10368:	e59f300c 	ldr	r3, [pc, #12]	; 1037c <_start+0x38>
   1036c:	ebffffeb 	bl	10320 <__libc_start_main@plt>
   10370:	ebfffff0 	bl	10338 <abort@plt>
   10374:	000104f0 	.word	0x000104f0
   10378:	00010434 	.word	0x00010434
   1037c:	00010490 	.word	0x00010490

00010380 <call_weak_fn>:
   10380:	e59f3014 	ldr	r3, [pc, #20]	; 1039c <call_weak_fn+0x1c>
   10384:	e59f2014 	ldr	r2, [pc, #20]	; 103a0 <call_weak_fn+0x20>
   10388:	e08f3003 	add	r3, pc, r3
   1038c:	e7932002 	ldr	r2, [r3, r2]
   10390:	e3520000 	cmp	r2, #0
   10394:	012fff1e 	bxeq	lr
   10398:	eaffffe3 	b	1032c <__gmon_start__@plt>
   1039c:	00010c70 	.word	0x00010c70
   103a0:	00000020 	.word	0x00000020

000103a4 <deregister_tm_clones>:
   103a4:	e59f0018 	ldr	r0, [pc, #24]	; 103c4 <deregister_tm_clones+0x20>
   103a8:	e59f3018 	ldr	r3, [pc, #24]	; 103c8 <deregister_tm_clones+0x24>
   103ac:	e1530000 	cmp	r3, r0
   103b0:	012fff1e 	bxeq	lr
   103b4:	e59f3010 	ldr	r3, [pc, #16]	; 103cc <deregister_tm_clones+0x28>
   103b8:	e3530000 	cmp	r3, #0
   103bc:	012fff1e 	bxeq	lr
   103c0:	e12fff13 	bx	r3
   103c4:	0002102c 	.word	0x0002102c
   103c8:	0002102c 	.word	0x0002102c
   103cc:	00000000 	.word	0x00000000

000103d0 <register_tm_clones>:
   103d0:	e59f0024 	ldr	r0, [pc, #36]	; 103fc <register_tm_clones+0x2c>
   103d4:	e59f1024 	ldr	r1, [pc, #36]	; 10400 <register_tm_clones+0x30>
   103d8:	e0413000 	sub	r3, r1, r0
   103dc:	e1a01fa3 	lsr	r1, r3, #31
   103e0:	e0811143 	add	r1, r1, r3, asr #2
   103e4:	e1b010c1 	asrs	r1, r1, #1
   103e8:	012fff1e 	bxeq	lr
   103ec:	e59f3010 	ldr	r3, [pc, #16]	; 10404 <register_tm_clones+0x34>
   103f0:	e3530000 	cmp	r3, #0
   103f4:	012fff1e 	bxeq	lr
   103f8:	e12fff13 	bx	r3
   103fc:	0002102c 	.word	0x0002102c
   10400:	0002102c 	.word	0x0002102c
   10404:	00000000 	.word	0x00000000

00010408 <__do_global_dtors_aux>:
   10408:	e92d4010 	push	{r4, lr}
   1040c:	e59f4018 	ldr	r4, [pc, #24]	; 1042c <__do_global_dtors_aux+0x24>
   10410:	e5d43000 	ldrb	r3, [r4]
   10414:	e3530000 	cmp	r3, #0
   10418:	18bd8010 	popne	{r4, pc}
   1041c:	ebffffe0 	bl	103a4 <deregister_tm_clones>
   10420:	e3a03001 	mov	r3, #1
   10424:	e5c43000 	strb	r3, [r4]
   10428:	e8bd8010 	pop	{r4, pc}
   1042c:	0002102c 	.word	0x0002102c

00010430 <frame_dummy>:
   10430:	eaffffe6 	b	103d0 <register_tm_clones>

00010434 <main>:
   10434:	e92d4800 	push	{fp, lr}
   10438:	e28db004 	add	fp, sp, #4
   1043c:	e24dd008 	sub	sp, sp, #8
   10440:	e59f003c 	ldr	r0, [pc, #60]	; 10484 <main+0x50>
   10444:	ebffffb2 	bl	10314 <puts@plt>
   10448:	e59f3038 	ldr	r3, [pc, #56]	; 10488 <main+0x54>
   1044c:	e3a02003 	mov	r2, #3
   10450:	e5c32000 	strb	r2, [r3]
   10454:	e59f302c 	ldr	r3, [pc, #44]	; 10488 <main+0x54>
   10458:	e5d33000 	ldrb	r3, [r3]
   1045c:	e6ef3073 	uxtb	r3, r3
   10460:	e2833007 	add	r3, r3, #7
   10464:	e50b3008 	str	r3, [fp, #-8]
   10468:	e51b1008 	ldr	r1, [fp, #-8]
   1046c:	e59f0018 	ldr	r0, [pc, #24]	; 1048c <main+0x58>
   10470:	ebffffa4 	bl	10308 <printf@plt>
   10474:	e3a03000 	mov	r3, #0
   10478:	e1a00003 	mov	r0, r3
   1047c:	e24bd004 	sub	sp, fp, #4
   10480:	e8bd8800 	pop	{fp, pc}
   10484:	00010590 	.word	0x00010590
   10488:	0002102d 	.word	0x0002102d
   1048c:	0001059c 	.word	0x0001059c

00010490 <__libc_csu_init>:
   10490:	e92d47f0 	push	{r4, r5, r6, r7, r8, r9, sl, lr}
   10494:	e1a07000 	mov	r7, r0
   10498:	e59f6048 	ldr	r6, [pc, #72]	; 104e8 <__libc_csu_init+0x58>
   1049c:	e59f5048 	ldr	r5, [pc, #72]	; 104ec <__libc_csu_init+0x5c>
   104a0:	e08f6006 	add	r6, pc, r6
   104a4:	e08f5005 	add	r5, pc, r5
   104a8:	e0466005 	sub	r6, r6, r5
   104ac:	e1a08001 	mov	r8, r1
   104b0:	e1a09002 	mov	r9, r2
   104b4:	ebffff8b 	bl	102e8 <_init>
   104b8:	e1b06146 	asrs	r6, r6, #2
   104bc:	08bd87f0 	popeq	{r4, r5, r6, r7, r8, r9, sl, pc}
   104c0:	e3a04000 	mov	r4, #0
   104c4:	e4953004 	ldr	r3, [r5], #4
   104c8:	e1a02009 	mov	r2, r9
   104cc:	e1a01008 	mov	r1, r8
   104d0:	e1a00007 	mov	r0, r7
   104d4:	e2844001 	add	r4, r4, #1
   104d8:	e12fff33 	blx	r3
   104dc:	e1560004 	cmp	r6, r4
   104e0:	1afffff7 	bne	104c4 <__libc_csu_init+0x34>
   104e4:	e8bd87f0 	pop	{r4, r5, r6, r7, r8, r9, sl, pc}
   104e8:	00010a6c 	.word	0x00010a6c
   104ec:	00010a64 	.word	0x00010a64

000104f0 <__libc_csu_fini>:
   104f0:	e12fff1e 	bx	lr

Disassembly of section .fini:

000104f4 <_fini>:
   104f4:	e92d4008 	push	{r3, lr}
   104f8:	e8bd8008 	pop	{r3, pc}
