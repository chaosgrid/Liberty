#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71d60);

PROC_DECLARE(0x6f71d60, internal_6f71d60, public_6f71d60);
extern "C" NAKED register_t __cdecl internal_6f71d60()
{
    __asm
    {
        fld dword ptr ds : [public_6f730fc]
        ret 4
        UNREACHABLE_TRAP(0x6f71d60)
    }
}
