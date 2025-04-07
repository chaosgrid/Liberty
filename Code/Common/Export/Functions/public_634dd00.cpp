#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd00);

PROC_DECLARE(0x634dd00, internal_634dd00, public_634dd00);
extern "C" NAKED register_t __cdecl internal_634dd00()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_63a55cc
        ret 
        UNREACHABLE_TRAP(0x634dd00)
    }
}
