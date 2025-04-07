#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aad0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_623aaea _public_623aaea

PROC_DECLARE(0x623aad0, internal_623aad0, public_623aad0);
extern "C" NAKED register_t __cdecl internal_623aad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_623aaea
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_623aaea : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x623aad0)
    }
}

#undef public_623aaea
