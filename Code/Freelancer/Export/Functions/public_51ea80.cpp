#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_51b480);

PROC_DECLARE(0x51ea80, internal_51ea80, public_51ea80);
extern "C" NAKED register_t __cdecl internal_51ea80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_51b480
        push 0x40400000
        push 0
        call public_41a0f0
        add esp, 8
        mov byte ptr ds : [esi+0xF8], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x51ea80)
    }
}
