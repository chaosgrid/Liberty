#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bf30);
CLANG_FORWARD_PROC_SYMBOL(public_634bf40);

PROC_DECLARE(0x634bf30, internal_634bf30, public_634bf30);
extern "C" NAKED register_t __cdecl internal_634bf30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_634bf40
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x634bf30)
    }
}
