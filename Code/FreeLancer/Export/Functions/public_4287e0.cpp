#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4287e0, internal_4287e0, public_4287e0);
extern "C" NAKED register_t __cdecl internal_4287e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x4287e0)
    }
}
