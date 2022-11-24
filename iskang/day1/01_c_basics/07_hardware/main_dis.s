
main:     file format elf32-littlearm


Disassembly of section .init:

000102c8 <_init>:
   102c8:	e92d4008 	push	{r3, lr}
   102cc:	eb000030 	bl	10394 <call_weak_fn>
   102d0:	e8bd8008 	pop	{r3, pc}

Disassembly of section .plt:

000102d4 <.plt>:
   102d4:	e52de004 	push	{lr}		; (str lr, [sp, #-4]!)
   102d8:	e59fe004 	ldr	lr, [pc, #4]	; 102e4 <.plt+0x10>
   102dc:	e08fe00e 	add	lr, pc, lr
   102e0:	e5bef008 	ldr	pc, [lr, #8]!
   102e4:	00010d1c 	.word	0x00010d1c

000102e8 <printf@plt>:
   102e8:	e28fc600 	add	ip, pc, #0, 12
   102ec:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102f0:	e5bcfd1c 	ldr	pc, [ip, #3356]!	; 0xd1c

000102f4 <__libc_start_main@plt>:
   102f4:	e28fc600 	add	ip, pc, #0, 12
   102f8:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   102fc:	e5bcfd14 	ldr	pc, [ip, #3348]!	; 0xd14

00010300 <__gmon_start__@plt>:
   10300:	e28fc600 	add	ip, pc, #0, 12
   10304:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10308:	e5bcfd0c 	ldr	pc, [ip, #3340]!	; 0xd0c

0001030c <abort@plt>:
   1030c:	e28fc600 	add	ip, pc, #0, 12
   10310:	e28cca10 	add	ip, ip, #16, 20	; 0x10000
   10314:	e5bcfd04 	ldr	pc, [ip, #3332]!	; 0xd04

Disassembly of section .text:

00010318 <main>:
   10318:	e92d4010 	push	{r4, lr}
   1031c:	e59f4028 	ldr	r4, [pc, #40]	; 1034c <main+0x34>
   10320:	e59f0028 	ldr	r0, [pc, #40]	; 10350 <main+0x38>
   10324:	e5d41000 	ldrb	r1, [r4]
   10328:	ebffffee 	bl	102e8 <printf@plt>
   1032c:	e3a03003 	mov	r3, #3
   10330:	e5c43000 	strb	r3, [r4]
   10334:	e5d41000 	ldrb	r1, [r4]
   10338:	e59f0014 	ldr	r0, [pc, #20]	; 10354 <main+0x3c>
   1033c:	e2811007 	add	r1, r1, #7
   10340:	ebffffe8 	bl	102e8 <printf@plt>
   10344:	e3a00000 	mov	r0, #0
   10348:	e8bd8010 	pop	{r4, pc}
   1034c:	00021029 	.word	0x00021029
   10350:	00010548 	.word	0x00010548
   10354:	00010554 	.word	0x00010554

00010358 <_start>:
   10358:	e3a0b000 	mov	fp, #0
   1035c:	e3a0e000 	mov	lr, #0
   10360:	e49d1004 	pop	{r1}		; (ldr r1, [sp], #4)
   10364:	e1a0200d 	mov	r2, sp
   10368:	e52d2004 	push	{r2}		; (str r2, [sp, #-4]!)
   1036c:	e52d0004 	push	{r0}		; (str r0, [sp, #-4]!)
   10370:	e59fc010 	ldr	ip, [pc, #16]	; 10388 <_start+0x30>
   10374:	e52dc004 	push	{ip}		; (str ip, [sp, #-4]!)
   10378:	e59f000c 	ldr	r0, [pc, #12]	; 1038c <_start+0x34>
   1037c:	e59f300c 	ldr	r3, [pc, #12]	; 10390 <_start+0x38>
   10380:	ebffffdb 	bl	102f4 <__libc_start_main@plt>
   10384:	ebffffe0 	bl	1030c <abort@plt>
   10388:	000104a8 	.word	0x000104a8
   1038c:	00010318 	.word	0x00010318
   10390:	00010448 	.word	0x00010448

00010394 <call_weak_fn>:
   10394:	e59f3014 	ldr	r3, [pc, #20]	; 103b0 <call_weak_fn+0x1c>
   10398:	e59f2014 	ldr	r2, [pc, #20]	; 103b4 <call_weak_fn+0x20>
   1039c:	e08f3003 	add	r3, pc, r3
   103a0:	e7932002 	ldr	r2, [r3, r2]
   103a4:	e3520000 	cmp	r2, #0
   103a8:	012fff1e 	bxeq	lr
   103ac:	eaffffd3 	b	10300 <__gmon_start__@plt>
   103b0:	00010c5c 	.word	0x00010c5c
   103b4:	0000001c 	.word	0x0000001c

000103b8 <deregister_tm_clones>:
   103b8:	e59f0018 	ldr	r0, [pc, #24]	; 103d8 <deregister_tm_clones+0x20>
   103bc:	e59f3018 	ldr	r3, [pc, #24]	; 103dc <deregister_tm_clones+0x24>
   103c0:	e1530000 	cmp	r3, r0
   103c4:	012fff1e 	bxeq	lr
   103c8:	e59f3010 	ldr	r3, [pc, #16]	; 103e0 <deregister_tm_clones+0x28>
   103cc:	e3530000 	cmp	r3, #0
   103d0:	012fff1e 	bxeq	lr
   103d4:	e12fff13 	bx	r3
   103d8:	00021028 	.word	0x00021028
   103dc:	00021028 	.word	0x00021028
   103e0:	00000000 	.word	0x00000000

000103e4 <register_tm_clones>:
   103e4:	e59f0024 	ldr	r0, [pc, #36]	; 10410 <register_tm_clones+0x2c>
   103e8:	e59f1024 	ldr	r1, [pc, #36]	; 10414 <register_tm_clones+0x30>
   103ec:	e0413000 	sub	r3, r1, r0
   103f0:	e1a01fa3 	lsr	r1, r3, #31
   103f4:	e0811143 	add	r1, r1, r3, asr #2
   103f8:	e1b010c1 	asrs	r1, r1, #1
   103fc:	012fff1e 	bxeq	lr
   10400:	e59f3010 	ldr	r3, [pc, #16]	; 10418 <register_tm_clones+0x34>
   10404:	e3530000 	cmp	r3, #0
   10408:	012fff1e 	bxeq	lr
   1040c:	e12fff13 	bx	r3
   10410:	00021028 	.word	0x00021028
   10414:	00021028 	.word	0x00021028
   10418:	00000000 	.word	0x00000000

0001041c <__do_global_dtors_aux>:
   1041c:	e92d4010 	push	{r4, lr}
   10420:	e59f4018 	ldr	r4, [pc, #24]	; 10440 <__do_global_dtors_aux+0x24>
   10424:	e5d43000 	ldrb	r3, [r4]
   10428:	e3530000 	cmp	r3, #0
   1042c:	18bd8010 	popne	{r4, pc}
   10430:	ebffffe0 	bl	103b8 <deregister_tm_clones>
   10434:	e3a03001 	mov	r3, #1
   10438:	e5c43000 	strb	r3, [r4]
   1043c:	e8bd8010 	pop	{r4, pc}
   10440:	00021028 	.word	0x00021028

00010444 <frame_dummy>:
   10444:	eaffffe6 	b	103e4 <register_tm_clones>

00010448 <__libc_csu_init>:
   10448:	e92d47f0 	push	{r4, r5, r6, r7, r8, r9, sl, lr}
   1044c:	e1a07000 	mov	r7, r0
   10450:	e59f6048 	ldr	r6, [pc, #72]	; 104a0 <__libc_csu_init+0x58>
   10454:	e59f5048 	ldr	r5, [pc, #72]	; 104a4 <__libc_csu_init+0x5c>
   10458:	e08f6006 	add	r6, pc, r6
   1045c:	e08f5005 	add	r5, pc, r5
   10460:	e0466005 	sub	r6, r6, r5
   10464:	e1a08001 	mov	r8, r1
   10468:	e1a09002 	mov	r9, r2
   1046c:	ebffff95 	bl	102c8 <_init>
   10470:	e1b06146 	asrs	r6, r6, #2
   10474:	08bd87f0 	popeq	{r4, r5, r6, r7, r8, r9, sl, pc}
   10478:	e3a04000 	mov	r4, #0
   1047c:	e4953004 	ldr	r3, [r5], #4
   10480:	e1a02009 	mov	r2, r9
   10484:	e1a01008 	mov	r1, r8
   10488:	e1a00007 	mov	r0, r7
   1048c:	e2844001 	add	r4, r4, #1
   10490:	e12fff33 	blx	r3
   10494:	e1560004 	cmp	r6, r4
   10498:	1afffff7 	bne	1047c <__libc_csu_init+0x34>
   1049c:	e8bd87f0 	pop	{r4, r5, r6, r7, r8, r9, sl, pc}
   104a0:	00010ab4 	.word	0x00010ab4
   104a4:	00010aac 	.word	0x00010aac

000104a8 <__libc_csu_fini>:
   104a8:	e12fff1e 	bx	lr

Disassembly of section .fini:

000104ac <_fini>:
   104ac:	e92d4008 	push	{r3, lr}
   104b0:	e8bd8008 	pop	{r3, pc}
