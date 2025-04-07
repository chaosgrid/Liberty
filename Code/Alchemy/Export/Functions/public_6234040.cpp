#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234040);
CLANG_FORWARD_PROC_SYMBOL(public_62340f0);

PROC_DECLARE(0x6234040, internal_6234040, public_6234040);
extern "C" NAKED register_t __cdecl internal_6234040()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_62340f0
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6234040)
    }
}
