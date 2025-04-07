#include "Common-PCH.h"

PROC_DECLARE(0x62db270, internal_62db270, public_62db270);
extern "C" NAKED register_t __cdecl internal_62db270()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x62db270)
    }
}
