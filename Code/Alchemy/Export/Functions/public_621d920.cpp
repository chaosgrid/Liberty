#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_621d360);
CLANG_FORWARD_PROC_SYMBOL(public_621d920);

PROC_DECLARE(0x621d920, internal_621d920, public_621d920);
extern "C" NAKED register_t __cdecl internal_621d920()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 4
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_621d360
        UNREACHABLE_TRAP(0x621d920)
    }
}
