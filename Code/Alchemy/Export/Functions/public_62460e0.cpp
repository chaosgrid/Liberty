#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_62464a6);

PROC_DECLARE(0x62460e0, internal_62460e0, public_62460e0);
extern "C" NAKED register_t __cdecl internal_62460e0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_62464a6
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62460e0)
    }
}
