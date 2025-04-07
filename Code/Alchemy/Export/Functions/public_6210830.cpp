#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6210830);
CLANG_FORWARD_PROC_SYMBOL(public_6210a60);

PROC_DECLARE(0x6210830, internal_6210830, public_6210830);
extern "C" NAKED register_t __cdecl internal_6210830()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_6210a60
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6210830)
    }
}
