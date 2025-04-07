#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d447b0);

PROC_DECLARE(0x6d447b0, internal_6d447b0, public_6d447b0);
extern "C" NAKED register_t __cdecl internal_6d447b0()
{
    __asm
    {
        fld qword ptr ds : [public_6d8fb28]
        fadd qword ptr ds : [public_6d8fb20]
        ret 
        UNREACHABLE_TRAP(0x6d447b0)
    }
}
