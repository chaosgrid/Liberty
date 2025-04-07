#include "Common-PCH.h"

PROC_DECLARE(0x62681e0, internal_62681e0, public_62681e0);
extern "C" NAKED register_t __cdecl internal_62681e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x62681e0)
    }
}
