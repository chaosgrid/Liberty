#include "Common-PCH.h"

PROC_DECLARE(0x6286f90, internal_6286f90, public_6286f90);
extern "C" NAKED register_t __cdecl internal_6286f90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        add eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6286f90)
    }
}
