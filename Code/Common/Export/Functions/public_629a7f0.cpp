#include "Common-PCH.h"

PROC_DECLARE(0x629a7f0, internal_629a7f0, public_629a7f0);
extern "C" NAKED register_t __cdecl internal_629a7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xE0]
        and al, 7
        neg al
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x629a7f0)
    }
}
