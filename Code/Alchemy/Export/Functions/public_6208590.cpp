#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6208590);
CLANG_FORWARD_PROC_SYMBOL(public_620a150);

PROC_DECLARE(0x6208590, internal_6208590, public_6208590);
extern "C" NAKED register_t __cdecl internal_6208590()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_620a150
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6208590)
    }
}
