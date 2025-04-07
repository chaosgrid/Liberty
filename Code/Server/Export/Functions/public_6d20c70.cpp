#include "Server-PCH.h"

PROC_DECLARE(0x6d20c70, internal_6d20c70, public_6d20c70);
extern "C" NAKED register_t __cdecl internal_6d20c70()
{
    __asm
    {
        lea eax, ds:[ecx+0x24]
        ret 
        UNREACHABLE_TRAP(0x6d20c70)
    }
}
