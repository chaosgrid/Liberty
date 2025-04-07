#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cf50);

#define public_6d3e0a0 _public_6d3e0a0
#define public_6d3e0a2 _public_6d3e0a2
#define public_6d3e0b7 _public_6d3e0b7
#define public_6d3e0cb _public_6d3e0cb
#define public_6d3e0d6 _public_6d3e0d6

PROC_DECLARE(0x6d3e03e, internal_6d3e03e, public_6d3e03e);
extern "C" NAKED register_t __cdecl internal_6d3e03e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov ecx, dword ptr ss : [ebp+8]
        fld dword ptr ds : [ecx+0xC]
        push esi
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6d5f8ec]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [ebp+0xC]
        jne public_6d3e0b7
        test eax, eax
        je public_6d3e0a0
        fsqrt 
        fdivr dword ptr ds : [public_6d5e488]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [eax+8]
        jmp public_6d3e0a2
        public_6d3e0a0 : nop
        fstp st(0)
        public_6d3e0a2 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        test esi, esi
        je public_6d3e0d6
        fld dword ptr ds : [ecx+0xC]
        call public_6d5cf50
        fadd st(0), st
        fstp dword ptr ds : [esi]
        jmp public_6d3e0d6
        public_6d3e0b7 : nop
        test eax, eax
        fstp st(0)
        je public_6d3e0cb
        fld1 
        fstp dword ptr ds : [eax]
        fldz 
        fstp dword ptr ds : [eax+4]
        fldz 
        fstp dword ptr ds : [eax+8]
        public_6d3e0cb : nop
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        je public_6d3e0d6
        fldz 
        fstp dword ptr ds : [eax]
        public_6d3e0d6 : nop
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3e03e)
    }
}

#undef public_6d3e0a0
#undef public_6d3e0a2
#undef public_6d3e0b7
#undef public_6d3e0cb
#undef public_6d3e0d6
