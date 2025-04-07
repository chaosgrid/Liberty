#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6354c10);
CLANG_FORWARD_PROC_SYMBOL(public_63551c0);
CLANG_FORWARD_PROC_SYMBOL(public_6355590);

PROC_DECLARE(0x6355590, internal_6355590, public_6355590);
extern "C" NAKED register_t __cdecl internal_6355590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        push eax
        call public_6354c10
        mov ecx, esi
        call public_63551c0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6355590)
    }
}
