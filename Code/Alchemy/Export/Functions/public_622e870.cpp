#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622e870);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_622e88a _public_622e88a

PROC_DECLARE(0x622e870, internal_622e870, public_622e870);
extern "C" NAKED register_t __cdecl internal_622e870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_622e88a
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_622e88a : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x622e870)
    }
}

#undef public_622e88a
