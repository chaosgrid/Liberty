#include "Common-PCH.h"

PROC_DECLARE(0x6295810, internal_6295810, public_6295810);
extern "C" NAKED register_t __cdecl internal_6295810()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6295810)
    }
}
