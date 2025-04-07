#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d4445e);

#define public_6d44475 _public_6d44475
#define public_6d4447a _public_6d4447a
#define public_6d4448d _public_6d4448d
#define public_6d44492 _public_6d44492
#define public_6d4449e _public_6d4449e
#define public_6d444a3 _public_6d444a3
#define public_6d444b7 _public_6d444b7
#define public_6d444bd _public_6d444bd
#define public_6d444c9 _public_6d444c9
#define public_6d444ce _public_6d444ce
#define public_6d444e2 _public_6d444e2
#define public_6d444e8 _public_6d444e8

PROC_DECLARE(0x6d4445e, internal_6d4445e, public_6d4445e);
extern "C" NAKED register_t __cdecl internal_6d4445e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x18
        fld dword ptr ds : [public_6d5e48c]
        fcom dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jne public_6d4447a
        fldz 
        public_6d44475 : nop
        fstp dword ptr ss : [ebp-0x18]
        jmp public_6d44492
        public_6d4447a : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d4448d
        fld1 
        jmp public_6d44475
        public_6d4448d : nop
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x18], eax
        public_6d44492 : nop
        fcom dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6d444a3
        fldz 
        public_6d4449e : nop
        fstp dword ptr ss : [ebp-0x14]
        jmp public_6d444bd
        public_6d444a3 : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d444b7
        fld1 
        jmp public_6d4449e
        public_6d444b7 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x14], eax
        public_6d444bd : nop
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jne public_6d444ce
        fldz 
        public_6d444c9 : nop
        fstp dword ptr ss : [ebp-0x10]
        jmp public_6d444e8
        public_6d444ce : nop
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d444e2
        fld1 
        jmp public_6d444c9
        public_6d444e2 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], eax
        public_6d444e8 : nop
        push esi
        call public_6d4443b
        fld dword ptr ss : [ebp-0x18]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-4]
        fistp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ss : [ebp-8]
        fmul dword ptr ds : [public_6d5f5e4]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-8]
        fistp dword ptr ss : [ebp-4]
        mov esi, dword ptr ds : [public_6d73504]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-8], esi
        fldcw word ptr ss : [ebp-8]
        shl eax, 6
        or eax, ecx
        shl eax, 5
        or eax, edx
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4445e)
    }
}

#undef public_6d44475
#undef public_6d4447a
#undef public_6d4448d
#undef public_6d44492
#undef public_6d4449e
#undef public_6d444a3
#undef public_6d444b7
#undef public_6d444bd
#undef public_6d444c9
#undef public_6d444ce
#undef public_6d444e2
#undef public_6d444e8
