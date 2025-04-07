#include "Common-PCH.h"

PROC_DECLARE(0x633afd0, internal_633afd0, public_633afd0);
extern "C" NAKED register_t __cdecl internal_633afd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x94]
        ret 
        UNREACHABLE_TRAP(0x633afd0)
    }
}
