#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6230790);
CLANG_FORWARD_PROC_SYMBOL(public_6230880);

PROC_DECLARE(0x6230790, internal_6230790, public_6230790);
extern "C" NAKED register_t __cdecl internal_6230790()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6230880
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6230790)
    }
}
