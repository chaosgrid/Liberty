#include "Common-PCH.h"

PROC_DECLARE(0x633baf0, internal_633baf0, public_633baf0);
extern "C" NAKED register_t __cdecl internal_633baf0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x28]
        ret 
        UNREACHABLE_TRAP(0x633baf0)
    }
}
