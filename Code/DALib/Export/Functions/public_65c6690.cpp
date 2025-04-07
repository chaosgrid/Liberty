#include "DALib-PCH.h"

PROC_DECLARE(0x65c6690, internal_65c6690, public_65c6690);
extern "C" NAKED register_t __cdecl internal_65c6690()
{
    __asm
    {
        lea eax, ds:[ecx+4]
        ret 
        UNREACHABLE_TRAP(0x65c6690)
    }
}
