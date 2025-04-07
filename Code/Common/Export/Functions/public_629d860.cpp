#include "Common-PCH.h"

PROC_DECLARE(0x629d860, internal_629d860, public_629d860);
extern "C" NAKED register_t __cdecl internal_629d860()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x629d860)
    }
}
