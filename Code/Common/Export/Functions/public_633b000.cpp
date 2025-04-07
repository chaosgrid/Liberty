#include "Common-PCH.h"

PROC_DECLARE(0x633b000, internal_633b000, public_633b000);
extern "C" NAKED register_t __cdecl internal_633b000()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        ret 
        UNREACHABLE_TRAP(0x633b000)
    }
}
