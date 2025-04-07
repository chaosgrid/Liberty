#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3aebe);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b0e2);

#define public_6d3b0fe _public_6d3b0fe
#define public_6d3b12a _public_6d3b12a
#define public_6d3b1b0 _public_6d3b1b0
#define public_6d3b28e _public_6d3b28e
#define public_6d3b29b _public_6d3b29b
#define public_6d3b2ad _public_6d3b2ad
#define public_6d3b2bd _public_6d3b2bd
#define public_6d3b2c0 _public_6d3b2c0
#define public_6d3b2d3 _public_6d3b2d3
#define public_6d3b2e3 _public_6d3b2e3
#define public_6d3b2e6 _public_6d3b2e6
#define public_6d3b32c _public_6d3b32c
#define public_6d3b339 _public_6d3b339
#define public_6d3b34c _public_6d3b34c
#define public_6d3b35c _public_6d3b35c
#define public_6d3b35f _public_6d3b35f
#define public_6d3b372 _public_6d3b372
#define public_6d3b382 _public_6d3b382
#define public_6d3b385 _public_6d3b385
#define public_6d3b3aa _public_6d3b3aa
#define public_6d3b3ac _public_6d3b3ac
#define public_6d3b3ae _public_6d3b3ae

PROC_DECLARE(0x6d3b0e2, internal_6d3b0e2, public_6d3b0e2);
extern "C" NAKED register_t __cdecl internal_6d3b0e2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+0x1090], 0
        jne public_6d3b0fe
        mov eax, 0x8007000E
        jmp public_6d3b3ae
        public_6d3b0fe : nop
        push ebx
        mov ebx, dword ptr ss : [ebp+0xC]
        push edi
        mov edi, dword ptr ss : [ebp+8]
        cmp edi, dword ptr ds : [esi+0x1074]
        jb public_6d3b12a
        cmp edi, dword ptr ds : [esi+0x107C]
        jae public_6d3b12a
        cmp ebx, dword ptr ds : [esi+0x1080]
        jb public_6d3b12a
        cmp ebx, dword ptr ds : [esi+0x1084]
        jb public_6d3b3aa
        public_6d3b12a : nop
        mov ecx, esi
        call public_6d3aebe
        test eax, eax
        jl public_6d3b3ac
        cmp dword ptr ss : [ebp+0x10], 0
        lea eax, ds:[edi+1]
        mov dword ptr ds : [esi+0x107C], eax
        lea eax, ds:[ebx+1]
        mov dword ptr ds : [esi+0x1074], edi
        mov dword ptr ds : [esi+0x1080], ebx
        mov dword ptr ds : [esi+0x1084], eax
        je public_6d3b3aa
        mov ecx, dword ptr ds : [esi+0x1050]
        mov edx, dword ptr ds : [esi+0x1054]
        imul ecx, edi
        mov eax, dword ptr ds : [esi+0x1070]
        imul edx, ebx
        add ecx, edx
        mov edx, dword ptr ds : [esi+0x106C]
        lea ebx, ds:[ecx+eax*2]
        add ebx, dword ptr ds : [esi+0x18]
        cmp eax, dword ptr ds : [esi+0x1078]
        mov dword ptr ss : [ebp+8], ebx
        mov dword ptr ss : [ebp+0x10], eax
        jae public_6d3b3aa
        fld dword ptr ds : [public_6d5e48c]
        mov edi, 0xFF
        fld dword ptr ds : [public_6d5e488]
        fld dword ptr ds : [public_6d5f608]
        public_6d3b1b0 : nop
        mov cx, word ptr ds : [esi+0x1094]
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        mov ebx, eax
        shr bx, cl
        mov cx, word ptr ds : [esi+0x1098]
        shr ax, cl
        mov cx, word ptr ds : [esi+0x1094]
        and ebx, edi
        mov dword ptr ss : [ebp+0xC], ebx
        fild dword ptr ss : [ebp+0xC]
        mov ebx, dword ptr ss : [ebp+8]
        and eax, edi
        mov dword ptr ss : [ebp+0xC], eax
        fsub st, st(1)
        xor eax, eax
        mov ax, word ptr ds : [ebx+2]
        fstp dword ptr ss : [ebp-8]
        fild dword ptr ss : [ebp+0xC]
        fsub dword ptr ds : [public_6d5f604]
        mov dword ptr ss : [ebp+0xC], eax
        shr ax, cl
        mov cx, word ptr ds : [esi+0x1098]
        fstp dword ptr ss : [ebp-4]
        and eax, edi
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp+0xC]
        fild dword ptr ss : [ebp+8]
        shr ax, cl
        fsub st, st(1)
        and eax, edi
        mov dword ptr ss : [ebp+8], eax
        fild dword ptr ss : [ebp+8]
        fsub dword ptr ds : [public_6d5f604]
        fst dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [public_6d5f6e8]
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [public_6d5f6e4]
        fst dword ptr ss : [ebp+8]
        fadd st, st(1)
        fst dword ptr ds : [edx]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f6e0]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0xC]
        fmul dword ptr ds : [public_6d5f6dc]
        fst dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [ebp-8]
        fsub st, st(1)
        fst dword ptr ss : [ebp+0xC]
        fstp st(1)
        fstp dword ptr ds : [edx+4]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f6d8]
        fst dword ptr ss : [ebp-4]
        fadd dword ptr ss : [ebp+8]
        fst dword ptr ss : [ebp+8]
        fstp dword ptr ds : [edx+8]
        fld1 
        fstp dword ptr ds : [edx+0xC]
        fcom st(5)
        fnstsw ax
        test ah, 5
        jp public_6d3b28e
        fstp st(0)
        fldz 
        jmp public_6d3b29b
        public_6d3b28e : nop
        fcom st(4)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b29b
        fstp st(0)
        fld1 
        public_6d3b29b : nop
        fstp dword ptr ds : [edx]
        fld dword ptr ss : [ebp+0xC]
        fcomp st(5)
        fnstsw ax
        test ah, 5
        jp public_6d3b2ad
        fldz 
        jmp public_6d3b2c0
        public_6d3b2ad : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp st(4)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b2bd
        fld1 
        jmp public_6d3b2c0
        public_6d3b2bd : nop
        fld dword ptr ss : [ebp+0xC]
        public_6d3b2c0 : nop
        fstp dword ptr ds : [edx+4]
        fld dword ptr ss : [ebp+8]
        fcomp st(5)
        fnstsw ax
        test ah, 5
        jp public_6d3b2d3
        fldz 
        jmp public_6d3b2e6
        public_6d3b2d3 : nop
        fld dword ptr ss : [ebp+8]
        fcomp st(4)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b2e3
        fld1 
        jmp public_6d3b2e6
        public_6d3b2e3 : nop
        fld dword ptr ss : [ebp+8]
        public_6d3b2e6 : nop
        fstp dword ptr ds : [edx+8]
        fld st(1)
        fmul dword ptr ds : [public_6d5f6e4]
        fst dword ptr ss : [ebp+8]
        fadd st, st(1)
        fstp st(2)
        fstp st(0)
        fst dword ptr ds : [edx+0x10]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ss : [ebp-8]
        fsub dword ptr ss : [ebp-0xC]
        fst dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [edx+0x14]
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ss : [ebp-4]
        fst dword ptr ss : [ebp+8]
        fstp dword ptr ds : [edx+0x18]
        fld1 
        fstp dword ptr ds : [edx+0x1C]
        fcom st(3)
        fnstsw ax
        test ah, 5
        jp public_6d3b32c
        fstp st(0)
        fldz 
        jmp public_6d3b339
        public_6d3b32c : nop
        fcom st(2)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b339
        fstp st(0)
        fld1 
        public_6d3b339 : nop
        fstp dword ptr ds : [edx+0x10]
        fld dword ptr ss : [ebp+0xC]
        fcomp st(3)
        fnstsw ax
        test ah, 5
        jp public_6d3b34c
        fldz 
        jmp public_6d3b35f
        public_6d3b34c : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b35c
        fld1 
        jmp public_6d3b35f
        public_6d3b35c : nop
        fld dword ptr ss : [ebp+0xC]
        public_6d3b35f : nop
        fstp dword ptr ds : [edx+0x14]
        fld dword ptr ss : [ebp+8]
        fcomp st(3)
        fnstsw ax
        test ah, 5
        jp public_6d3b372
        fldz 
        jmp public_6d3b385
        public_6d3b372 : nop
        fld dword ptr ss : [ebp+8]
        fcomp st(2)
        fnstsw ax
        test ah, 0x41
        jne public_6d3b382
        fld1 
        jmp public_6d3b385
        public_6d3b382 : nop
        fld dword ptr ss : [ebp+8]
        public_6d3b385 : nop
        add dword ptr ss : [ebp+0x10], 2
        fstp dword ptr ds : [edx+0x18]
        mov eax, dword ptr ss : [ebp+0x10]
        add ebx, 4
        add edx, 0x20
        cmp eax, dword ptr ds : [esi+0x1078]
        mov dword ptr ss : [ebp+8], ebx
        jb public_6d3b1b0
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6d3b3aa : nop
        xor eax, eax
        public_6d3b3ac : nop
        pop edi
        pop ebx
        public_6d3b3ae : nop
        pop esi
        leave 
        ret 0xC
        UNREACHABLE_TRAP(0x6d3b0e2)
    }
}

#undef public_6d3b0fe
#undef public_6d3b12a
#undef public_6d3b1b0
#undef public_6d3b28e
#undef public_6d3b29b
#undef public_6d3b2ad
#undef public_6d3b2bd
#undef public_6d3b2c0
#undef public_6d3b2d3
#undef public_6d3b2e3
#undef public_6d3b2e6
#undef public_6d3b32c
#undef public_6d3b339
#undef public_6d3b34c
#undef public_6d3b35c
#undef public_6d3b35f
#undef public_6d3b372
#undef public_6d3b382
#undef public_6d3b385
#undef public_6d3b3aa
#undef public_6d3b3ac
#undef public_6d3b3ae
