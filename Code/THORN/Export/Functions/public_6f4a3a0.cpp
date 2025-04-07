#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a3a0, internal_6f4a3a0, public_6f4a3a0);
extern "C" NAKED register_t __cdecl internal_6f4a3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        ret 
        UNREACHABLE_TRAP(0x6f4a3a0)
    }
}
