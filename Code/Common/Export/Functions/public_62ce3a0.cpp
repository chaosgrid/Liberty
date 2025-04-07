#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20f0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);

PROC_DECLARE(0x62ce3a0, internal_62ce3a0, public_62ce3a0);
extern "C" NAKED register_t __cdecl internal_62ce3a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push 0
        add ecx, 0x18
        call public_62e90a0
        mov ecx, esi
        pop esi
        jmp public_62d20f0
        UNREACHABLE_TRAP(0x62ce3a0)
    }
}
