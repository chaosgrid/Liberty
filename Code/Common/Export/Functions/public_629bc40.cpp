#include "Common-PCH.h"

PROC_DECLARE(0x629bc40, internal_629bc40, public_629bc40);
extern "C" NAKED register_t __cdecl internal_629bc40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x4C]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x629bc40)
    }
}
