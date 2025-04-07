#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63477c0);
CLANG_FORWARD_PROC_SYMBOL(public_6347dd0);

PROC_DECLARE(0x63477c0, internal_63477c0, public_63477c0);
extern "C" NAKED register_t __cdecl internal_63477c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea ecx, ds:[esi+0x50]
        push 1
        lea eax, ds:[ecx+8]
        push eax
        call public_6347dd0
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63477c0)
    }
}
