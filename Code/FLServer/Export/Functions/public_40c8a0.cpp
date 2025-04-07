#include "FLServer-PCH.h"

PROC_DECLARE(0x40c8a0, internal_40c8a0, public_40c8a0);
extern "C" NAKED register_t __cdecl internal_40c8a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x40c8a0)
    }
}
