#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3ad6d);
CLANG_FORWARD_PROC_SYMBOL(public_6d3be1d);

PROC_DECLARE(0x6d3be1d, internal_6d3be1d, public_6d3be1d);
extern "C" NAKED register_t __cdecl internal_6d3be1d()
{
    __asm
    {
        push esi
        push dword ptr ss : [esp+8]
        mov esi, ecx
        call public_6d3ad6d
        mov dword ptr ds : [esi], offset public_6d5f8cc
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3be1d)
    }
}
