#include "FLServer-PCH.h"

PROC_DECLARE(0x411cb0, internal_411cb0, public_411cb0);
extern "C" NAKED register_t __cdecl internal_411cb0()
{
    __asm
    {
        mov word ptr ds : [public_42848c], 4
        mov byte ptr ds : [public_42848e], 1
        ret 
        UNREACHABLE_TRAP(0x411cb0)
    }
}
