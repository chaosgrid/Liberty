#include "FLServer-PCH.h"

PROC_DECLARE(0x40b260, internal_40b260, public_40b260);
extern "C" NAKED register_t __cdecl internal_40b260()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x40b260)
    }
}
