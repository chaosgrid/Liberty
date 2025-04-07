#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_62328aa _public_62328aa

PROC_DECLARE(0x6232890, internal_6232890, public_6232890);
extern "C" NAKED register_t __cdecl internal_6232890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_62328aa
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_62328aa : nop
        mov dword ptr ss : [esp+8], eax
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x6232890)
    }
}

#undef public_62328aa
