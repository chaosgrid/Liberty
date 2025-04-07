#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff5e0);
CLANG_FORWARD_PROC_SYMBOL(public_63012d0);

PROC_DECLARE(0x62ff5e0, internal_62ff5e0, public_62ff5e0);
extern "C" NAKED register_t __cdecl internal_62ff5e0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea edx, ss:[esp+7]
        push edx
        call public_63012d0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62ff5e0)
    }
}
