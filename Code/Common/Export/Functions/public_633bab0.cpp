#include "Common-PCH.h"

PROC_DECLARE(0x633bab0, internal_633bab0, public_633bab0);
extern "C" NAKED register_t __cdecl internal_633bab0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x64]
        ret 
        UNREACHABLE_TRAP(0x633bab0)
    }
}
