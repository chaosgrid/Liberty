#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_50c440);

PROC_DECLARE(0x50c440, internal_50c440, public_50c440);
extern "C" NAKED register_t __cdecl internal_50c440()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        call public_4f8060
        mov dword ptr ds : [esi], offset public_5db458
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x50c440)
    }
}
