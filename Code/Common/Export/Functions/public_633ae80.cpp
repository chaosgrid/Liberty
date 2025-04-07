#include "Common-PCH.h"

PROC_DECLARE(0x633ae80, internal_633ae80, public_633ae80);
extern "C" NAKED register_t __cdecl internal_633ae80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xA0]
        ret 
        UNREACHABLE_TRAP(0x633ae80)
    }
}
