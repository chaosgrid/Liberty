#include "THORN-PCH.h"

PROC_DECLARE(0x6f2d4d0, internal_6f2d4d0, public_6f2d4d0);
extern "C" NAKED register_t __cdecl internal_6f2d4d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6f2d4d0)
    }
}
