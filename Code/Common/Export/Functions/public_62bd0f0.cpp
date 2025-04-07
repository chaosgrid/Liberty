#include "Common-PCH.h"

PROC_DECLARE(0x62bd0f0, internal_62bd0f0, public_62bd0f0);
extern "C" NAKED register_t __cdecl internal_62bd0f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x30]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x62bd0f0)
    }
}
