#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_622ba6a _public_622ba6a

PROC_DECLARE(0x622ba50, internal_622ba50, public_622ba50);
extern "C" NAKED register_t __cdecl internal_622ba50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_622ba6a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_622ba6a : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x622ba50)
    }
}

#undef public_622ba6a
