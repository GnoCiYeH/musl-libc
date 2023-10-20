#define __SYSCALL_LL_E(x) (x)
#define __SYSCALL_LL_O(x) (x)

static __inline long __syscall0(long n)
{
	unsigned long ret;
	__asm__ __volatile__ ("int $0x80" : "=a"(ret) : "a"(n) : "rcx", "r11", "memory");
	return ret;
}

static __inline long __syscall1(long n, long a1)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1)
        : "memory"
    );
    return ret;
}

static __inline long __syscall2(long n, long a1, long a2)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "movq %[arg2], %%r9\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1), [arg2] "r" (a2)
        : "memory"
    );
    return ret;
}

static __inline long __syscall3(long n, long a1, long a2, long a3)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "movq %[arg2], %%r9\n\t"
        "movq %[arg3], %%r10\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1), [arg2] "r" (a2), [arg3] "r" (a3)
        : "memory"
    );
    return ret;
}

static __inline long __syscall4(long n, long a1, long a2, long a3, long a4)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "movq %[arg2], %%r9\n\t"
        "movq %[arg3], %%r10\n\t"
        "movq %[arg4], %%r11\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1), [arg2] "r" (a2), [arg3] "r" (a3), [arg4] "r" (a4)
        : "memory"
    );
    return ret;
}

static __inline long __syscall5(long n, long a1, long a2, long a3, long a4, long a5)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "movq %[arg2], %%r9\n\t"
        "movq %[arg3], %%r10\n\t"
        "movq %[arg4], %%r11\n\t"
        "movq %[arg5], %%r12\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1), [arg2] "r" (a2), [arg3] "r" (a3), [arg4] "r" (a4), [arg5] "r" (a5)
        : "memory"
    );
    return ret;
}

static __inline long __syscall6(long n, long a1, long a2, long a3, long a4, long a5, long a6)
{
	unsigned long ret;
    __asm__ volatile (
        "movq %[num], %%rax\n\t"
        "movq %[arg1], %%r8\n\t"
        "movq %[arg2], %%r9\n\t"
        "movq %[arg3], %%r10\n\t"
        "movq %[arg4], %%r11\n\t"
        "movq %[arg5], %%r12\n\t"
		"movq %[arg6], %%r13\n\t"
        "int $0x80\n\t"
        : "=a" (ret)
        : [num] "r" (n), [arg1] "r" (a1), [arg2] "r" (a2), [arg3] "r" (a3), [arg4] "r" (a4), [arg5] "r" (a5), [arg6] "r" (a6)
        : "memory"
    );
    return ret;
}

#define VDSO_USEFUL
#define VDSO_CGT_SYM "__vdso_clock_gettime"
#define VDSO_CGT_VER "LINUX_2.6"