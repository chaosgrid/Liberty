#include "FLServer-PCH.h"

PROC_DECLARE(0x407130, internal_407130, public_407130);
extern "C" NAKED register_t __cdecl internal_407130()
{
    __asm
    {
        mov eax, offset public_41c740
        ret 
        UNREACHABLE_TRAP(0x407130)
    }
}
