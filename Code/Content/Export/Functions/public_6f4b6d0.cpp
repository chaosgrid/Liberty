#include "Content-PCH.h"

PROC_DECLARE(0x6f4b6d0, internal_6f4b6d0, public_6f4b6d0);
extern "C" NAKED register_t __cdecl internal_6f4b6d0()
{
    __asm
    {
        lea eax, ds:[ecx+0x20C]
        ret 
        UNREACHABLE_TRAP(0x6f4b6d0)
    }
}
