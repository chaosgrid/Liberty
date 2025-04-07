#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad641e);
CLANG_FORWARD_PROC_SYMBOL(public_6ad6435);

PROC_DECLARE(0x6ad641e, internal_6ad641e, public_6ad641e);
extern "C" NAKED register_t __cdecl internal_6ad641e()
{
    __asm
    {
        push 0
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call public_6ad6435
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ad641e)
    }
}
