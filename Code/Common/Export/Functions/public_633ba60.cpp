#include "Common-PCH.h"

PROC_DECLARE(0x633ba60, internal_633ba60, public_633ba60);
extern "C" NAKED register_t __cdecl internal_633ba60()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x48]
        ret 
        UNREACHABLE_TRAP(0x633ba60)
    }
}
