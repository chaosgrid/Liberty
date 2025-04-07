#include "Server-PCH.h"

PROC_DECLARE(0x6d567c0, internal_6d567c0, public_6d567c0);
extern "C" NAKED register_t __cdecl internal_6d567c0()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d567c0)
    }
}
