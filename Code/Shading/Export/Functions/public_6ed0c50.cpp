#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0cf0);

PROC_DECLARE(0x6ed0c50, internal_6ed0c50, public_6ed0c50);
extern "C" NAKED register_t __cdecl internal_6ed0c50()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ed0cf0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ed0c50)
    }
}
