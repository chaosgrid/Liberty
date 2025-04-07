#include "THORN-PCH.h"

PROC_DECLARE(0x6f2d4f0, internal_6f2d4f0, public_6f2d4f0);
extern "C" NAKED register_t __cdecl internal_6f2d4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x6f2d4f0)
    }
}
