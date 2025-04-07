#include "FLServer-PCH.h"

PROC_DECLARE(0x407120, internal_407120, public_407120);
extern "C" NAKED register_t __cdecl internal_407120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x407120)
    }
}
