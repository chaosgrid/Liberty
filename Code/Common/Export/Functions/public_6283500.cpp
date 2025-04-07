#include "Common-PCH.h"

PROC_DECLARE(0x6283500, internal_6283500, public_6283500);
extern "C" NAKED register_t __cdecl internal_6283500()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x2C0]
        ret 
        UNREACHABLE_TRAP(0x6283500)
    }
}
