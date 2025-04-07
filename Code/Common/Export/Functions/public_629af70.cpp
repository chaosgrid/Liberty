#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629af70);

PROC_DECLARE(0x629af70, internal_629af70, public_629af70);
extern "C" NAKED register_t __cdecl internal_629af70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x1C]
        ret 
        UNREACHABLE_TRAP(0x629af70)
    }
}
