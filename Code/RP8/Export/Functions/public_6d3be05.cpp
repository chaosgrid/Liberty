#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3ad6d);
CLANG_FORWARD_PROC_SYMBOL(public_6d3be05);

PROC_DECLARE(0x6d3be05, internal_6d3be05, public_6d3be05);
extern "C" NAKED register_t __cdecl internal_6d3be05()
{
    __asm
    {
        push esi
        push dword ptr ss : [esp+8]
        mov esi, ecx
        call public_6d3ad6d
        mov dword ptr ds : [esi], offset public_6d5f8bc
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d3be05)
    }
}
