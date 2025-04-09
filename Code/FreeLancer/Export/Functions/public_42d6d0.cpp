#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d6d0);

PROC_DECLARE(0x42d6d0, internal_42d6d0, public_42d6d0);
extern "C" NAKED register_t __cdecl internal_42d6d0()
{
    __asm
    {
        dec dword ptr ds : [public_667d68]
        ret 
        UNREACHABLE_TRAP(0x42d6d0)
    }
}
