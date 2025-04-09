#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5798a0, internal_5798a0, public_5798a0);
extern "C" NAKED register_t __cdecl internal_5798a0()
{
    __asm
    {
        lea eax, ds:[ecx+0x40C]
        ret 
        UNREACHABLE_TRAP(0x5798a0)
    }
}
