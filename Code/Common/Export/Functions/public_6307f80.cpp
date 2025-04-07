#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307f80);

PROC_DECLARE(0x6307f80, internal_6307f80, public_6307f80);
extern "C" NAKED register_t __cdecl internal_6307f80()
{
    __asm
    {
        fld qword ptr ds : [public_63fced0]
        ret 
        UNREACHABLE_TRAP(0x6307f80)
    }
}
