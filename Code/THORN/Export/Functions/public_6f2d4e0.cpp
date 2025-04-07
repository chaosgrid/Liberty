#include "THORN-PCH.h"

PROC_DECLARE(0x6f2d4e0, internal_6f2d4e0, public_6f2d4e0);
extern "C" NAKED register_t __cdecl internal_6f2d4e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        ret 
        UNREACHABLE_TRAP(0x6f2d4e0)
    }
}
