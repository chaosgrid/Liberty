#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623faf0);

#define public_623fb0c _public_623fb0c

PROC_DECLARE(0x623faf0, internal_623faf0, public_623faf0);
extern "C" NAKED register_t __cdecl internal_623faf0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF27FDE7D
        jne public_623fb0c
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x48]
        xor eax, eax
        mov dword ptr ds : [edx], ecx
        ret 0xC
        public_623fb0c : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623faf0)
    }
}

#undef public_623fb0c
