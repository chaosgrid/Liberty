#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_564520);

PROC_DECLARE(0x564520, internal_564520, public_564520);
extern "C" NAKED register_t __cdecl internal_564520()
{
    __asm
    {
        push edi
        mov ecx, 0x2D
        xor eax, eax
        mov edi, offset public_67a4a8
        rep stosd
        pop edi
        ret 
        UNREACHABLE_TRAP(0x564520)
    }
}
