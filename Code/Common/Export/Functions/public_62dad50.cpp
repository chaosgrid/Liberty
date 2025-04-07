#include "Common-PCH.h"

PROC_DECLARE(0x62dad50, internal_62dad50, public_62dad50);
extern "C" NAKED register_t __cdecl internal_62dad50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xC]
        xor eax, eax
        cmp edx, 0xFFFFFFFF
        setne al
        ret 
        UNREACHABLE_TRAP(0x62dad50)
    }
}
