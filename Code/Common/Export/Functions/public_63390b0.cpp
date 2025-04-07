#include "Common-PCH.h"

PROC_DECLARE(0x63390b0, internal_63390b0, public_63390b0);
extern "C" NAKED register_t __cdecl internal_63390b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x40]
        and eax, 0x18000
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x63390b0)
    }
}
