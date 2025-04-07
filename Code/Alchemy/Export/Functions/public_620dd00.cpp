#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dd00);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_620dd1a _public_620dd1a

PROC_DECLARE(0x620dd00, internal_620dd00, public_620dd00);
extern "C" NAKED register_t __cdecl internal_620dd00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_620dd1a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_620dd1a : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x620dd00)
    }
}

#undef public_620dd1a
