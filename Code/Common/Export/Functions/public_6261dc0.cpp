#include "Common-PCH.h"

PROC_DECLARE(0x6261dc0, internal_6261dc0, public_6261dc0);
extern "C" NAKED register_t __cdecl internal_6261dc0()
{
    __asm
    {
        lea eax, ds:[ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6261dc0)
    }
}
