#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);

#define public_41a3f9 _public_41a3f9

PROC_DECLARE(0x41a3e0, internal_41a3e0, public_41a3e0);
extern "C" NAKED register_t __cdecl internal_41a3e0()
{
    __asm
    {
        fld dword ptr ds : [public_6166b0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_41a3f9
        mov eax, 1
        ret 
        public_41a3f9 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x41a3e0)
    }
}

#undef public_41a3f9
