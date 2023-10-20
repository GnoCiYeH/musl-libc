/* Copyright 2011-2012 Nicholas J. Kain, licensed under standard MIT license */
.text
.global __set_thread_area
.hidden __set_thread_area
.type __set_thread_area,@function
__set_thread_area:
	mov %rdi,%rsi           /* shift for syscall */
	movq $0x1002,%r8       /* SET_FS register */
	movq $158,%rax          /* set fs segment to */
	int $0x80                 /* arch_prctl(SET_FS, arg)*/
	ret
