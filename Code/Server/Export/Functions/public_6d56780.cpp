#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf15f0);

PROC_DECLARE(0x6d56780, internal_6d56780, public_6d56780);
extern "C" NAKED register_t __cdecl internal_6d56780()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_6d8facc
        call public_6cf15f0
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d56780)
    }
}
