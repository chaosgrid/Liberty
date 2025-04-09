#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53e190, internal_53e190, public_53e190);
extern "C" NAKED register_t __cdecl internal_53e190()
{
    __asm
    {
        fld qword ptr ds : [public_5c8ba8]
        ret 4
        UNREACHABLE_TRAP(0x53e190)
    }
}
