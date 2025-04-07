#include "Common-PCH.h"

PROC_DECLARE(0x62a0700, internal_62a0700, public_62a0700);
extern "C" NAKED register_t __cdecl internal_62a0700()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        add eax, 0x34
        ret 
        UNREACHABLE_TRAP(0x62a0700)
    }
}
