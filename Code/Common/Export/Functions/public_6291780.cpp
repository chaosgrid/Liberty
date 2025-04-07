#include "Common-PCH.h"

PROC_DECLARE(0x6291780, internal_6291780, public_6291780);
extern "C" NAKED register_t __cdecl internal_6291780()
{
    __asm
    {
        fld qword ptr ds : [ecx+0xB8]
        ret 
        UNREACHABLE_TRAP(0x6291780)
    }
}
