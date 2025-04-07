#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b39e10, internal_6b39e10, public_6b39e10);
extern "C" NAKED register_t __cdecl internal_6b39e10()
{
    __asm
    {
        fld qword ptr ds : [public_6b6bef8]
        ret 4
        UNREACHABLE_TRAP(0x6b39e10)
    }
}
