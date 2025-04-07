#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bd80);

PROC_DECLARE(0x634bd80, internal_634bd80, public_634bd80);
extern "C" NAKED register_t __cdecl internal_634bd80()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], offset public_63a551c
        mov dword ptr ds : [eax+4], ecx
        ret 4
        UNREACHABLE_TRAP(0x634bd80)
    }
}
