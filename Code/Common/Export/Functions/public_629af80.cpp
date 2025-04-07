#include "Common-PCH.h"

PROC_DECLARE(0x629af80, internal_629af80, public_629af80);
extern "C" NAKED register_t __cdecl internal_629af80()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x38]
        UNREACHABLE_TRAP(0x629af80)
    }
}
