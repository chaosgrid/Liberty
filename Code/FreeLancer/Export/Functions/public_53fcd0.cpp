#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53fcd0, internal_53fcd0, public_53fcd0);
extern "C" NAKED register_t __cdecl internal_53fcd0()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x2C0]
        ret 
        UNREACHABLE_TRAP(0x53fcd0)
    }
}
