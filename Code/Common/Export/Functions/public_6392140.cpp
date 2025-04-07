#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6392140);
CLANG_FORWARD_PROC_SYMBOL(public_639214e);

PROC_DECLARE(0x6392140, internal_6392140, public_6392140);
extern "C" NAKED register_t __cdecl internal_6392140()
{
    __asm
    {
        push 0
        push dword ptr ss : [esp+8]
        call public_639214e
        ret 4
        UNREACHABLE_TRAP(0x6392140)
    }
}
