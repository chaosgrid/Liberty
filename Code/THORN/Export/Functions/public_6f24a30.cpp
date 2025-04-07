#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f24a30);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d2e0);

PROC_DECLARE(0x6f24a30, internal_6f24a30, public_6f24a30);
extern "C" NAKED register_t __cdecl internal_6f24a30()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6f61dd4
        call public_6f2d2e0
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f24a30)
    }
}
