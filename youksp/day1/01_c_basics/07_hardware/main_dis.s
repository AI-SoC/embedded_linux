
main:     file format elf32-littlearm


Disassembly of section .init:

000102c8 <_init>:
   102c8:	e92d4008 	push	{r3, lr}
   102cc:	eb00002c 	bl	10384 <call_weak_fn>
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
   10318:	e59f3020 	ldr	r3, [pc, #32]	; 10340 <main+0x28>
   1031c:	e3a02003 	mov	r2, #3
   10320:	e92d4010 	push	{r4, lr}
   10324:	e5c32000 	strb	r2, [r3]
   10328:	e5d31000 	ldrb	r1, [r3]
   1032c:	e59f0010 	ldr	r0, [pc, #16]	; 10344 <main+0x2c>
   10330:	e2811007 	add	r1, r1, #7
   10334:	ebffffeb 	bl	102e8 <printf@plt>
   10338:	e3a00000 	mov	r0, #0
   1033c:	e8bd8010 	pop	{r4, pc}
   10340:	00021029 	.word	0x00021029
   10344:	00010538 	.word	0x00010538

00010348 <_start>:
   10348:	e3a0b000 	mov	fp, #0
   1034c:	e3a0e000 	mov	lr, #0
   10350:	e49d1004 	pop	{r1}		; (ldr r1, [sp], #4)
   10354:	e1a0200d 	mov	r2, sp
   10358:	e52d2004 	push	{r2}		; (str r2, [sp, #-4]!)
   1035c:	e52d0004 	push	{r0}		; (str r0, [sp, #-4]!)
   10360:	e59fc010 	ldr	ip, [pc, #16]	; 10378 <_start+0x30>
   10364:	e52dc004 	push	{ip}		; (str ip, [sp, #-4]!)
   10368:	e59f000c 	ldr	r0, [pc, #12]	; 1037c <_start+0x34>
   1036c:	e59f300c 	ldr	r3, [pc, #12]	; 10380 <_start+0x38>
   10370:	ebffffdf 	bl	102f4 <__libc_start_main@plt>
   10374:	ebffffe4 	bl	1030c <abort@plt>
   10378:	00010498 	.word	0x00010498
   1037c:	00010318 	.word	0x00010318
   10380:	00010438 	.word	0x00010438

00010384 <call_weak_fn>:
   10384:	e59f3014 	ldr	r3, [pc, #20]	; 103a0 <call_weak_fn+0x1c>
   10388:	e59f2014 	ldr	r2, [pc, #20]	; 103a4 <call_weak_fn+0x20>
   1038c:	e08f3003 	add	r3, pc, r3
   10390:	e7932002 	ldr	r2, [r3, r2]
   10394:	e3520000 	cmp	r2, #0
   10398:	012fff1e 	bxeq	lr
   1039c:	eaffffd7 	b	10300 <__gmon_start__@plt>
   103a0:	00010c6c 	.word	0x00010c6c
   103a4:	0000001c 	.word	0x0000001c

000103a8 <deregister_tm_clones>:
   103a8:	e59f0018 	ldr	r0, [pc, #24]	; 103c8 <deregister_tm_clones+0x20>
   103ac:	e59f3018 	ldr	r3, [pc, #24]	; 103cc <deregister_tm_clones+0x24>
   103b0:	e1530000 	cmp	r3, r0
   103b4:	012fff1e 	bxeq	lr
   103b8:	e59f3010 	ldr	r3, [pc, #16]	; 103d0 <deregister_tm_clones+0x28>
   103bc:	e3530000 	cmp	r3, #0
   103c0:	012fff1e 	bxeq	lr
   103c4:	e12fff13 	bx	r3
   103c8:	00021028 	.word	0x00021028
   103cc:	00021028 	.word	0x00021028
   103d0:	00000000 	.word	0x00000000

000103d4 <register_tm_clones>:
   103d4:	e59f0024 	ldr	r0, [pc, #36]	; 10400 <register_tm_clones+0x2c>
   103d8:	e59f1024 	ldr	r1, [pc, #36]	; 10404 <register_tm_clones+0x30>
   103dc:	e0413000 	sub	r3, r1, r0
   103e0:	e1a01fa3 	lsr	r1, r3, #31
   103e4:	e0811143 	add	r1, r1, r3, asr #2
   103e8:	e1b010c1 	asrs	r1, r1, #1
   103ec:	012fff1e 	bxeq	lr
   103f0:	e59f3010 	ldr	r3, [pc, #16]	; 10408 <register_tm_clones+0x34>
   103f4:	e3530000 	cmp	r3, #0
   103f8:	012fff1e 	bxeq	lr
   103fc:	e12fff13 	bx	r3
   10400:	00021028 	.word	0x00021028
   10404:	00021028 	.word	0x00021028
   10408:	00000000 	.word	0x00000000

0001040c <__do_global_dtors_aux>:
   1040c:	e92d4010 	push	{r4, lr}
   10410:	e59f4018 	ldr	r4, [pc, #24]	; 10430 <__do_global_dtors_aux+0x24>
   10414:	e5d43000 	ldrb	r3, [r4]
   10418:	e3530000 	cmp	r3, #0
   1041c:	18bd8010 	popne	{r4, pc}
   10420:	ebffffe0 	bl	103a8 <deregister_tm_clones>
   10424:	e3a03001 	mov	r3, #1
   10428:	e5c43000 	strb	r3, [r4]
   1042c:	e8bd8010 	pop	{r4, pc}
   10430:	00021028 	.word	0x00021028

00010434 <frame_dummy>:
   10434:	eaffffe6 	b	103d4 <register_tm_clones>

00010438 <__libc_csu_init>:
   10438:	e92d47f0 	push	{r4, r5, r6, r7, r8, r9, sl, lr}
   1043c:	e1a07000 	mov	r7, r0
   10440:	e59f6048 	ldr	r6, [pc, #72]	; 10490 <__libc_csu_init+0x58>
   10444:	e59f5048 	ldr	r5, [pc, #72]	; 10494 <__libc_csu_init+0x5c>
   10448:	e08f6006 	add	r6, pc, r6
   1044c:	e08f5005 	add	r5, pc, r5
   10450:	e0466005 	sub	r6, r6, r5
   10454:	e1a08001 	mov	r8, r1
   10458:	e1a09002 	mov	r9, r2
   1045c:	ebffff99 	bl	102c8 <_init>
   10460:	e1b06146 	asrs	r6, r6, #2
   10464:	08bd87f0 	popeq	{r4, r5, r6, r7, r8, r9, sl, pc}
   10468:	e3a04000 	mov	r4, #0
   1046c:	e4953004 	ldr	r3, [r5], #4
   10470:	e1a02009 	mov	r2, r9
   10474:	e1a01008 	mov	r1, r8
   10478:	e1a00007 	mov	r0, r7
   1047c:	e2844001 	add	r4, r4, #1
   10480:	e12fff33 	blx	r3
   10484:	e1560004 	cmp	r6, r4
   10488:	1afffff7 	bne	1046c <__libc_csu_init+0x34>
   1048c:	e8bd87f0 	pop	{r4, r5, r6, r7, r8, r9, sl, pc}
   10490:	00010ac4 	.word	0x00010ac4
   10494:	00010abc 	.word	0x00010abc

00010498 <__libc_csu_fini>:
   10498:	e12fff1e 	bx	lr

Disassembly of section .fini:

0001049c <_fini>:
   1049c:	e92d4008 	push	{r3, lr}
   104a0:	e8bd8008 	pop	{r3, pc}
