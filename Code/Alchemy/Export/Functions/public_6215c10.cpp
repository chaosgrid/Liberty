#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6215c2a _public_6215c2a

PROC_DECLARE(0x6215c10, internal_6215c10, public_6215c10);
extern "C" NAKED register_t __cdecl internal_6215c10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_6215c2a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_6215c2a : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6215c10)
    }
}

#undef public_6215c2a
