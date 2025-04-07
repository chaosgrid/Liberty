#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631c020);
CLANG_FORWARD_PROC_SYMBOL(public_631ccb0);

PROC_DECLARE(0x631c020, internal_631c020, public_631c020);
extern "C" NAKED register_t __cdecl internal_631c020()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea edx, ss:[esp+7]
        push edx
        call public_631ccb0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x631c020)
    }
}
