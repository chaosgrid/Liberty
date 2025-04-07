#include "Common-PCH.h"

PROC_DECLARE(0x62a0150, internal_62a0150, public_62a0150);
extern "C" NAKED register_t __cdecl internal_62a0150()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x14]
        xor eax, eax
        cmp edx, 3
        sete al
        ret 
        UNREACHABLE_TRAP(0x62a0150)
    }
}
