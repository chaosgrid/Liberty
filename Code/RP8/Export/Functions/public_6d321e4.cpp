#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d321e4);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cf08);

PROC_DECLARE(0x6d321e4, internal_6d321e4, public_6d321e4);
extern "C" NAKED register_t __cdecl internal_6d321e4()
{
    __asm
    {
        push 1
        push dword ptr ss : [esp+8]
        call public_6d5cf08
        UNREACHABLE_TRAP(0x6d321e4)
    }
}
