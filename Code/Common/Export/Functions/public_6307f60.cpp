#include "Common-PCH.h"

PROC_DECLARE(0x6307f60, internal_6307f60, public_6307f60);
extern "C" NAKED register_t __cdecl internal_6307f60()
{
    __asm
    {
        fld qword ptr ds : [public_63fced0]
        fadd qword ptr ss : [esp+4]
        fstp qword ptr ds : [public_63fced0]
        ret 
        UNREACHABLE_TRAP(0x6307f60)
    }
}
