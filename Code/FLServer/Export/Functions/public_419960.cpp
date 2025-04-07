#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_419960);
CLANG_FORWARD_PROC_SYMBOL(public_4199ca);

PROC_DECLARE(0x419960, internal_419960, public_419960);
extern "C" NAKED register_t __cdecl internal_419960()
{
    __asm
    {
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call public_4199ca
        ret 0x10
        UNREACHABLE_TRAP(0x419960)
    }
}
