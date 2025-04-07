#include "Common-PCH.h"

PROC_DECLARE(0x62db1a0, internal_62db1a0, public_62db1a0);
extern "C" NAKED register_t __cdecl internal_62db1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        setne al
        ret 
        UNREACHABLE_TRAP(0x62db1a0)
    }
}
