#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6233fe0);
CLANG_FORWARD_PROC_SYMBOL(public_62340d0);

PROC_DECLARE(0x6233fe0, internal_6233fe0, public_6233fe0);
extern "C" NAKED register_t __cdecl internal_6233fe0()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_62340d0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6233fe0)
    }
}
