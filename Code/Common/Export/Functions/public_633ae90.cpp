#include "Common-PCH.h"

PROC_DECLARE(0x633ae90, internal_633ae90, public_633ae90);
extern "C" NAKED register_t __cdecl internal_633ae90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xA4]
        ret 
        UNREACHABLE_TRAP(0x633ae90)
    }
}
