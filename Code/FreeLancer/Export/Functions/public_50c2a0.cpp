#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_429040);
CLANG_FORWARD_PROC_SYMBOL(public_50c2a0);

PROC_DECLARE(0x50c2a0, internal_50c2a0, public_50c2a0);
extern "C" NAKED register_t __cdecl internal_50c2a0()
{
    __asm
    {
        push esi
        push 1
        mov esi, ecx
        call public_429040
        or byte ptr ds : [esi+0xC], 2
        mov dword ptr ds : [esi], offset public_5db36c
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50c2a0)
    }
}
