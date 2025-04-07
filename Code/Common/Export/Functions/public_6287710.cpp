#include "Common-PCH.h"

PROC_DECLARE(0x6287710, internal_6287710, public_6287710);
extern "C" NAKED register_t __cdecl internal_6287710()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x104]
        ret 
        UNREACHABLE_TRAP(0x6287710)
    }
}
