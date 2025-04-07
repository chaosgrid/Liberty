#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62120c0);
CLANG_FORWARD_PROC_SYMBOL(public_623f9a0);

#define public_62120da _public_62120da

PROC_DECLARE(0x62120c0, internal_62120c0, public_62120c0);
extern "C" NAKED register_t __cdecl internal_62120c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        cmp eax, 0x1BA23359
        jne public_62120da
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], offset public_6255804
        xor eax, eax
        ret 0xC
        public_62120da : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], eax
        add edx, 4
        mov dword ptr ss : [esp+4], edx
        jmp public_623f9a0
        UNREACHABLE_TRAP(0x62120c0)
    }
}

#undef public_62120da
