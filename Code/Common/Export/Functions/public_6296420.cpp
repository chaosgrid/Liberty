#include "Common-PCH.h"

PROC_DECLARE(0x6296420, internal_6296420, public_6296420);
extern "C" NAKED register_t __cdecl internal_6296420()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [eax+0x7C]
        ret 
        UNREACHABLE_TRAP(0x6296420)
    }
}
