#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_5134a0);

PROC_DECLARE(0x5134a0, internal_5134a0, public_5134a0);
/* CHUNK of public_513440 */
extern "C" NAKED register_t __cdecl internal_5134a0()
{
    __asm
    {
        push esi
        push 0
        mov esi, ecx
        call public_4f8060
        mov dword ptr ds : [esi], offset public_5db770
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5134a0)
    }
}
