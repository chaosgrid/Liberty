#include "RP8-PCH.h"

PROC_DECLARE(0x6d37332, internal_6d37332, public_6d37332);
extern "C" NAKED register_t __cdecl internal_6d37332()
{
    __asm
    {
        ret 0xC
        UNREACHABLE_TRAP(0x6d37332)
    }
}
