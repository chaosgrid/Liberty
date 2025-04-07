#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f70c0);

PROC_DECLARE(0x4f70c0, internal_4f70c0, public_4f70c0);
extern "C" NAKED register_t __cdecl internal_4f70c0()
{
    __asm
    {
        fld dword ptr ds : [public_6129c8]
        fsubr qword ptr ds : [public_5c89b8]
        ret 
        UNREACHABLE_TRAP(0x4f70c0)
    }
}
