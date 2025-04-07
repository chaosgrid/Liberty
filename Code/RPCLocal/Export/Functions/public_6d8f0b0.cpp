#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0b0, internal_6d8f0b0, public_6d8f0b0);
extern "C" NAKED register_t __cdecl internal_6d8f0b0()
{
    __asm
    {
        fld qword ptr ds : [public_6db3ba0]
        ret 4
        UNREACHABLE_TRAP(0x6d8f0b0)
    }
}
