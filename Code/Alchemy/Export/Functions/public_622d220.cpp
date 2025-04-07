#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622d220);
CLANG_FORWARD_PROC_SYMBOL(public_622d350);

PROC_DECLARE(0x622d220, internal_622d220, public_622d220);
extern "C" NAKED register_t __cdecl internal_622d220()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+8], 0
        call public_622d350
        mov eax, esi
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x622d220)
    }
}
