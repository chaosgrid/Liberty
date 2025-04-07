#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f580c8);

PROC_DECLARE(0x6f57e26, internal_6f57e26, public_6f57e26);
extern "C" NAKED register_t __cdecl internal_6f57e26()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6f580c8
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f57e26)
    }
}
