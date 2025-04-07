#include "Common-PCH.h"

PROC_DECLARE(0x6287690, internal_6287690, public_6287690);
extern "C" NAKED register_t __cdecl internal_6287690()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x160]
        ret 
        UNREACHABLE_TRAP(0x6287690)
    }
}
