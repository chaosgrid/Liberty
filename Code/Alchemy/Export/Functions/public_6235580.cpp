#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235580);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_623559a _public_623559a

PROC_DECLARE(0x6235580, internal_6235580, public_6235580);
extern "C" NAKED register_t __cdecl internal_6235580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_623559a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_623559a : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6235580)
    }
}

#undef public_623559a
