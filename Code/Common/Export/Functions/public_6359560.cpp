#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63594d0);
CLANG_FORWARD_PROC_SYMBOL(public_6359560);

#define public_63595a0 _public_63595a0

PROC_DECLARE(0x6359560, internal_6359560, public_6359560);
extern "C" NAKED register_t __cdecl internal_6359560()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [ecx+0x58]
        mov dword ptr ss : [esp], 0
        fcom dword ptr ds : [public_658aa14]
        fnstsw ax
        test ah, 1
        je public_63595a0
        fld dword ptr ds : [public_658aa14]
        mov eax, dword ptr ss : [esp+8]
        fsub st, st(1)
        fmul dword ptr ds : [eax+0xB0]
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_63594d0
        fadd dword ptr ss : [esp]
        fadd st(0), st
        pop ecx
        ret 4
        public_63595a0 : nop
        mov edx, dword ptr ds : [ecx+0x40]
        fstp st(0)
        mov dword ptr ds : [edx+0x58], 0
        call public_63594d0
        fadd dword ptr ss : [esp]
        fadd st(0), st
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6359560)
    }
}

#undef public_63595a0
