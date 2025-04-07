#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2b2);
CLANG_FORWARD_PROC_SYMBOL(public_6d3327b);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf20);

#define public_6d332ac _public_6d332ac
#define public_6d332bf _public_6d332bf
#define public_6d332f6 _public_6d332f6
#define public_6d33306 _public_6d33306
#define public_6d33331 _public_6d33331
#define public_6d3335a _public_6d3335a
#define public_6d3337a _public_6d3337a
#define public_6d3337d _public_6d3337d
#define public_6d3338d _public_6d3338d
#define public_6d333c1 _public_6d333c1
#define public_6d333d4 _public_6d333d4
#define public_6d33405 _public_6d33405
#define public_6d33408 _public_6d33408
#define public_6d3341f _public_6d3341f
#define public_6d33426 _public_6d33426
#define public_6d33448 _public_6d33448
#define public_6d3344f _public_6d3344f
#define public_6d3345e _public_6d3345e
#define public_6d33471 _public_6d33471
#define public_6d3348b _public_6d3348b
#define public_6d334a2 _public_6d334a2
#define public_6d334ad _public_6d334ad
#define public_6d334b7 _public_6d334b7
#define public_6d334e0 _public_6d334e0
#define public_6d3350d _public_6d3350d
#define public_6d3352b _public_6d3352b
#define public_6d33531 _public_6d33531
#define public_6d33533 _public_6d33533

PROC_DECLARE(0x6d3327b, internal_6d3327b, public_6d3327b);
extern "C" NAKED register_t __cdecl internal_6d3327b()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x3C
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        push esi
        push edi
        xor edi, edi
        cmp ebx, edi
        je public_6d33531
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, edi
        je public_6d33531
        test eax, eax
        mov dword ptr ss : [ebp-0x3C], eax
        fild dword ptr ss : [ebp-0x3C]
        jge public_6d332ac
        fadd dword ptr ds : [public_6d5f200]
        public_6d332ac : nop
        test ebx, ebx
        fstp dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x3C], ebx
        fild dword ptr ss : [ebp-0x3C]
        jge public_6d332bf
        fadd dword ptr ds : [public_6d5f200]
        public_6d332bf : nop
        fst dword ptr ss : [ebp-0x30]
        xor eax, eax
        fld dword ptr ss : [ebp-0x1C]
        cmp dword ptr ss : [ebp+0x10], edi
        fdiv st, st(1)
        push 0x10
        setne al
        cmp ebx, edi
        pop esi
        fst dword ptr ss : [ebp-0x28]
        fstp st(1)
        fld dword ptr ds : [public_6d5f1fc]
        fdiv st, st(1)
        fstp dword ptr ss : [ebp-0x34]
        jbe public_6d33331
        test eax, eax
        mov dword ptr ss : [ebp-0x3C], eax
        fild dword ptr ss : [ebp-0x3C]
        jge public_6d332f6
        fadd dword ptr ds : [public_6d5f200]
        public_6d332f6 : nop
        test edi, edi
        mov dword ptr ss : [ebp-0x3C], edi
        fild dword ptr ss : [ebp-0x3C]
        jge public_6d33306
        fadd dword ptr ds : [public_6d5f200]
        public_6d33306 : nop
        fsub dword ptr ds : [public_6d5f1fc]
        fmul st, st(2)
        fld st(0)
        fadd st, st(3)
        fsub st, st(1)
        fadd st, st(2)
        fadd dword ptr ds : [public_6d5e488]
        call public_6d2f2b2
        fstp st(0)
        shl eax, 4
        inc edi
        cmp edi, ebx
        lea esi, ds:[esi+eax+0xC]
        jb public_6d332f6
        fstp st(0)
        public_6d33331 : nop
        push esi
        fstp st(0)
        call public_6d2f2a0
        mov edi, eax
        test edi, edi
        pop ecx
        je public_6d33531
        xor ebx, ebx
        fldz 
        and dword ptr ss : [ebp-0x18], ebx
        fstp dword ptr ss : [ebp-4]
        cmp dword ptr ss : [ebp+8], ebx
        push 4
        pop esi
        jbe public_6d3352b
        public_6d3335a : nop
        and dword ptr ss : [ebp-0xC], 0
        fild dword ptr ss : [ebp-0x18]
        lea eax, ds:[esi+edi]
        mov dword ptr ss : [ebp-0x3C], eax
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x38], esi
        add esi, 4
        test eax, eax
        jge public_6d3337a
        fadd dword ptr ds : [public_6d5f200]
        public_6d3337a : nop
        fstp dword ptr ss : [ebp-0x2C]
        public_6d3337d : nop
        mov eax, dword ptr ss : [ebp-0xC]
        fild dword ptr ss : [ebp-0xC]
        test eax, eax
        jge public_6d3338d
        fadd dword ptr ds : [public_6d5f200]
        public_6d3338d : nop
        cmp dword ptr ss : [ebp+0x10], 0
        fadd dword ptr ss : [ebp-0x2C]
        fsub dword ptr ds : [public_6d5f1fc]
        fst dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x28]
        fst dword ptr ss : [ebp-0x20]
        fld dword ptr ss : [ebp-0x28]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-8]
        jne public_6d333d4
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 5
        jp public_6d333c1
        fstp st(0)
        fldz 
        fst dword ptr ss : [ebp-0x20]
        public_6d333c1 : nop
        fld dword ptr ss : [ebp-8]
        fcomp dword ptr ss : [ebp-0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_6d333d4
        mov eax, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-8], eax
        public_6d333d4 : nop
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6d5cf20
        pop ecx
        pop ecx
        call public_6d2f2b2
        mov edx, eax
        mov dword ptr ss : [ebp-0x14], edx
        fild dword ptr ss : [ebp-0x14]
        fcom dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 5
        jp public_6d334e0
        mov ecx, edx
        sub ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-0x24], ecx
        jmp public_6d33408
        public_6d33405 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        public_6d33408 : nop
        test edx, edx
        fld dword ptr ds : [public_6d5e488]
        fadd st, st(1)
        fstp dword ptr ss : [ebp-0x14]
        jge public_6d3341f
        mov eax, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[edx+eax]
        jmp public_6d33426
        public_6d3341f : nop
        cmp edx, dword ptr ss : [ebp+0xC]
        jge public_6d33426
        mov ecx, edx
        public_6d33426 : nop
        cmp ecx, ebx
        je public_6d3344f
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ds : [public_6d5f5b0]
        fnstsw ax
        test ah, 0x41
        jne public_6d33448
        lea eax, ds:[esi+edi]
        mov dword ptr ds : [eax], ebx
        mov ebx, dword ptr ss : [ebp-4]
        add esi, 8
        mov dword ptr ds : [eax+4], ebx
        public_6d33448 : nop
        fldz 
        mov ebx, ecx
        fstp dword ptr ss : [ebp-4]
        public_6d3344f : nop
        fcom dword ptr ss : [ebp-0x20]
        fnstsw ax
        test ah, 5
        jp public_6d3345e
        fstp st(0)
        fld dword ptr ss : [ebp-0x20]
        public_6d3345e : nop
        fld dword ptr ss : [ebp-0x14]
        fcomp dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 0x41
        jne public_6d33471
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x14], eax
        public_6d33471 : nop
        cmp dword ptr ss : [ebp+0x10], 0
        jne public_6d334a2
        fld dword ptr ss : [ebp-0x10]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 5
        jp public_6d3348b
        fld1 
        jmp public_6d334ad
        public_6d3348b : nop
        fld dword ptr ss : [ebp-0x10]
        fadd dword ptr ds : [public_6d5e488]
        fcomp dword ptr ss : [ebp-0x30]
        fnstsw ax
        test ah, 1
        jne public_6d334a2
        fldz 
        jmp public_6d334ad
        public_6d334a2 : nop
        fld dword ptr ss : [ebp-0x14]
        fadd st, st(1)
        fmul dword ptr ss : [ebp-0x34]
        fsub dword ptr ss : [ebp-0x10]
        public_6d334ad : nop
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d334b7
        fld1 
        fsubrp 
        public_6d334b7 : nop
        fld dword ptr ss : [ebp-0x14]
        inc edx
        fsub st, st(2)
        inc dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x14], edx
        fmul st, st(1)
        fadd dword ptr ss : [ebp-4]
        fstp dword ptr ss : [ebp-4]
        fstp st(0)
        fstp st(0)
        fild dword ptr ss : [ebp-0x14]
        fcom dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 5
        jnp public_6d33405
        public_6d334e0 : nop
        inc dword ptr ss : [ebp-0xC]
        fstp st(0)
        cmp dword ptr ss : [ebp-0xC], 2
        jb public_6d3337d
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ds : [public_6d5f5b0]
        fnstsw ax
        test ah, 0x41
        jne public_6d3350d
        mov ecx, dword ptr ss : [ebp-4]
        lea eax, ds:[esi+edi]
        add esi, 8
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ecx
        public_6d3350d : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        fldz 
        mov eax, esi
        fstp dword ptr ss : [ebp-4]
        sub eax, dword ptr ss : [ebp-0x38]
        inc dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [ebp-0x18]
        cmp eax, dword ptr ss : [ebp+8]
        jb public_6d3335a
        public_6d3352b : nop
        mov dword ptr ds : [edi], esi
        mov eax, edi
        jmp public_6d33533
        public_6d33531 : nop
        xor eax, eax
        public_6d33533 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d3327b)
    }
}

#undef public_6d332ac
#undef public_6d332bf
#undef public_6d332f6
#undef public_6d33306
#undef public_6d33331
#undef public_6d3335a
#undef public_6d3337a
#undef public_6d3337d
#undef public_6d3338d
#undef public_6d333c1
#undef public_6d333d4
#undef public_6d33405
#undef public_6d33408
#undef public_6d3341f
#undef public_6d33426
#undef public_6d33448
#undef public_6d3344f
#undef public_6d3345e
#undef public_6d33471
#undef public_6d3348b
#undef public_6d334a2
#undef public_6d334ad
#undef public_6d334b7
#undef public_6d334e0
#undef public_6d3350d
#undef public_6d3352b
#undef public_6d33531
#undef public_6d33533
