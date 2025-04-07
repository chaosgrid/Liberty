#include "Common-PCH.h"

PROC_DECLARE(0x6281160, internal_6281160, public_6281160);
extern "C" NAKED register_t __cdecl internal_6281160()
{
    __asm
    {
        lea eax, ds:[ecx+0xB0]
        ret 
        UNREACHABLE_TRAP(0x6281160)
    }
}
