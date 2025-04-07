#include "Common-PCH.h"

PROC_DECLARE(0x633ba80, internal_633ba80, public_633ba80);
extern "C" NAKED register_t __cdecl internal_633ba80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x58]
        ret 
        UNREACHABLE_TRAP(0x633ba80)
    }
}
