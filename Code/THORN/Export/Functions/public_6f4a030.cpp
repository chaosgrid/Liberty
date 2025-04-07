#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40b30);

PROC_DECLARE(0x6f4a030, internal_6f4a030, public_6f4a030);
extern "C" NAKED register_t __cdecl internal_6f4a030()
{
    __asm
    {
        push esi
        mov esi, ecx
        lea eax, ds:[esi+0x84]
        push eax
        call public_6f40b30
        lea eax, ds:[esi+0x98]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4a030)
    }
}
