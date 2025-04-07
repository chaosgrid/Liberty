#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f409a0);

PROC_DECLARE(0x6f49f60, internal_6f49f60, public_6f49f60);
extern "C" NAKED register_t __cdecl internal_6f49f60()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x84]
        push eax
        call public_6f409a0
        lea eax, ds:[esi+0x8C]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f49f60)
    }
}
