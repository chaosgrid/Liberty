#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59d570);

PROC_DECLARE(0x59d570, internal_59d570, public_59d570);
extern "C" NAKED register_t __cdecl internal_59d570()
{
    __asm
    {
        fld dword ptr ds : [public_67dce8]
        fdiv dword ptr ds : [public_5e5dc4]
        ret 
        UNREACHABLE_TRAP(0x59d570)
    }
}
