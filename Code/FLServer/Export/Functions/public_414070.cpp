#include "FLServer-PCH.h"

PROC_DECLARE(0x414070, internal_414070, public_414070);
extern "C" NAKED register_t __cdecl internal_414070()
{
    __asm
    {
        mov eax, offset public_41e2d8
        ret 
        UNREACHABLE_TRAP(0x414070)
    }
}
