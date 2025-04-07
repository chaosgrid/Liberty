#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d20d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e90a0);

PROC_DECLARE(0x62ce380, internal_62ce380, public_62ce380);
extern "C" NAKED register_t __cdecl internal_62ce380()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_62d20d0
        mov ecx, dword ptr ds : [esi+0x24]
        push 1
        add ecx, 0x18
        call public_62e90a0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ce380)
    }
}
