#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62405d0);

#define public_62405ec _public_62405ec

PROC_DECLARE(0x62405d0, internal_62405d0, public_62405d0);
extern "C" NAKED register_t __cdecl internal_62405d0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF27FDE7D
        jne public_62405ec
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x4C]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_62405ec : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62405d0)
    }
}

#undef public_62405ec
