#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347040);
CLANG_FORWARD_PROC_SYMBOL(public_634b590);
CLANG_FORWARD_PROC_SYMBOL(public_634b5e0);

PROC_DECLARE(0x634b5e0, internal_634b5e0, public_634b5e0);
extern "C" NAKED register_t __cdecl internal_634b5e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6347040
        mov ecx, esi
        call public_634b590
        pop esi
        ret 
        UNREACHABLE_TRAP(0x634b5e0)
    }
}
