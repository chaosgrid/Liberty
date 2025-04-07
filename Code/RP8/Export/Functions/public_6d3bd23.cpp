#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3b573);
CLANG_FORWARD_PROC_SYMBOL(public_6d3bd23);

PROC_DECLARE(0x6d3bd23, internal_6d3bd23, public_6d3bd23);
extern "C" NAKED register_t __cdecl internal_6d3bd23()
{
    __asm
    {
        push esi
        push dword ptr ss : [esp+8]
        mov esi, ecx
        call public_6d3b573
        mov dword ptr ds : [esi], offset public_6d5f86c
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3bd23)
    }
}
