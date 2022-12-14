	.file	"headerdemo.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC2:
	.ascii "area is :%f\12\0"
LC3:
	.ascii "value of no is:%d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$11, 40(%esp)
	flds	LC0
	fstps	60(%esp)
	flds	60(%esp)
	fldl	LC1
	fmulp	%st, %st(1)
	flds	60(%esp)
	fmulp	%st, %st(1)
	fstps	56(%esp)
	flds	56(%esp)
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	leal	40(%esp), %eax
	movl	%eax, 52(%esp)
	flds	56(%esp)
	fstpl	4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	52(%esp), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.section .rdata,"dr"
	.align 4
LC0:
	.long	1106562253
	.align 8
LC1:
	.long	1374389535
	.long	1074339512
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
