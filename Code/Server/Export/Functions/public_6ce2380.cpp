#include "Server-PCH.h"

PROC_DECLARE(0x6ce2380, internal_6ce2380, public_6ce2380);
extern "C" NAKED register_t __cdecl internal_6ce2380()
{
    __asm
    {
        fld qword ptr ds : [ecx+0x2C0]
        ret 
        UNREACHABLE_TRAP(0x6ce2380)
    }
}
