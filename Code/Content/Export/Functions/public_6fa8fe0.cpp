#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fec);

PROC_DECLARE(0x6fa8fe0, internal_6fa8fe0, public_6fa8fe0);
extern "C" NAKED register_t __cdecl internal_6fa8fe0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6fa8fec
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6fa8fe0)
    }
}
