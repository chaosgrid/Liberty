#include "Common-PCH.h"

PROC_DECLARE(0x62f09d0, internal_62f09d0, public_62f09d0);
extern "C" NAKED register_t __cdecl internal_62f09d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x40]
        xor eax, eax
        cmp edx, 0xFFFFFFFF
        setne al
        ret 
        UNREACHABLE_TRAP(0x62f09d0)
    }
}
