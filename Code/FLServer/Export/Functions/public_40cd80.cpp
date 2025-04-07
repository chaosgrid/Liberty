#include "FLServer-PCH.h"

PROC_DECLARE(0x40cd80, internal_40cd80, public_40cd80);
extern "C" NAKED register_t __cdecl internal_40cd80()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x40cd80)
    }
}
