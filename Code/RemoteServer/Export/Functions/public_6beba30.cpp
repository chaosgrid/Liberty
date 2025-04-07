#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6beba30);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe40);

PROC_DECLARE(0x6beba30, internal_6beba30, public_6beba30);
extern "C" NAKED register_t __cdecl internal_6beba30()
{
    __asm
    {
        jmp public_6bebe40
        UNREACHABLE_TRAP(0x6beba30)
    }
}
