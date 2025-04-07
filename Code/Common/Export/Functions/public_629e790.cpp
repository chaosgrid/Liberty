#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629e790);

PROC_DECLARE(0x629e790, internal_629e790, public_629e790);
extern "C" NAKED register_t __cdecl internal_629e790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x70]
        ret 
        UNREACHABLE_TRAP(0x629e790)
    }
}
