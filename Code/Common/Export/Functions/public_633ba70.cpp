#include "Common-PCH.h"

PROC_DECLARE(0x633ba70, internal_633ba70, public_633ba70);
extern "C" NAKED register_t __cdecl internal_633ba70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x54]
        ret 
        UNREACHABLE_TRAP(0x633ba70)
    }
}
