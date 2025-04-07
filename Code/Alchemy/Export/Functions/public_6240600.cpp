#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6240600);

#define public_624061a _public_624061a

PROC_DECLARE(0x6240600, internal_6240600, public_6240600);
extern "C" NAKED register_t __cdecl internal_6240600()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF27FDE7D
        jne public_624061a
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x4C]
        xor eax, eax
        ret 0xC
        public_624061a : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6240600)
    }
}

#undef public_624061a
