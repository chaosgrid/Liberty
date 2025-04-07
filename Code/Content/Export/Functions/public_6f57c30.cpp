#include "Content-PCH.h"

PROC_DECLARE(0x6f57c30, internal_6f57c30, public_6f57c30);
extern "C" NAKED register_t __cdecl internal_6f57c30()
{
    __asm
    {
        lea eax, ds:[ecx+0x16C]
        ret 
        UNREACHABLE_TRAP(0x6f57c30)
    }
}
