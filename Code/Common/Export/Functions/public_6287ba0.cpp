#include "Common-PCH.h"

PROC_DECLARE(0x6287ba0, internal_6287ba0, public_6287ba0);
extern "C" NAKED register_t __cdecl internal_6287ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x88]
        fld dword ptr ds : [eax+0x12C]
        ret 
        UNREACHABLE_TRAP(0x6287ba0)
    }
}
