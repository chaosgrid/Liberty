#include "EngBase-PCH.h"

PROC_DECLARE(0x66121a0, internal_66121a0, public_66121a0);
extern "C" NAKED register_t __cdecl internal_66121a0()
{
    __asm
    {
        lea eax, ds:[ecx+0x3C]
        ret 
        UNREACHABLE_TRAP(0x66121a0)
    }
}
