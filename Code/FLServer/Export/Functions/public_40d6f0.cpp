#include "FLServer-PCH.h"

PROC_DECLARE(0x40d6f0, internal_40d6f0, public_40d6f0);
extern "C" NAKED register_t __cdecl internal_40d6f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b1d0]
        ret 
        UNREACHABLE_TRAP(0x40d6f0)
    }
}
