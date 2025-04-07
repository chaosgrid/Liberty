#include "FLServer-PCH.h"

PROC_DECLARE(0x414060, internal_414060, public_414060);
extern "C" NAKED register_t __cdecl internal_414060()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41b3b0]
        ret 
        UNREACHABLE_TRAP(0x414060)
    }
}
