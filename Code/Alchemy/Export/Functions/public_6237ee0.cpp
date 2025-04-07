#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_6237efa _public_6237efa

PROC_DECLARE(0x6237ee0, internal_6237ee0, public_6237ee0);
extern "C" NAKED register_t __cdecl internal_6237ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_6237efa
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_6237efa : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6237ee0)
    }
}

#undef public_6237efa
