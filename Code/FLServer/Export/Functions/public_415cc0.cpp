#include "FLServer-PCH.h"

PROC_DECLARE(0x415cc0, internal_415cc0, public_415cc0);
extern "C" NAKED register_t __cdecl internal_415cc0()
{
    __asm
    {
        ret 4
        UNREACHABLE_TRAP(0x415cc0)
    }
}
