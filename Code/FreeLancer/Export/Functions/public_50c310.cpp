#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_50c310);

PROC_DECLARE(0x50c310, internal_50c310, public_50c310);
extern "C" NAKED register_t __cdecl internal_50c310()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        call public_4f8060
        mov dword ptr ds : [esi], offset public_5db41c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50c310)
    }
}
