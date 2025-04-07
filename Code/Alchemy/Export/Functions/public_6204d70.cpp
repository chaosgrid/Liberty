#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6204d8a _public_6204d8a

PROC_DECLARE(0x6204d70, internal_6204d70, public_6204d70);
extern "C" NAKED register_t __cdecl internal_6204d70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_6204d8a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_6204d8a : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6204d70)
    }
}

#undef public_6204d8a
