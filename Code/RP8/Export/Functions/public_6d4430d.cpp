#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4430d);

PROC_DECLARE(0x6d4430d, internal_6d4430d, public_6d4430d);
extern "C" NAKED register_t __cdecl internal_6d4430d()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push 0x10
        pop ecx
        xor eax, eax
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6d4430d)
    }
}
