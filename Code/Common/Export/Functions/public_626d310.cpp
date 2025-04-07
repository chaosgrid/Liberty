#include "Common-PCH.h"

PROC_DECLARE(0x626d310, internal_626d310, public_626d310);
extern "C" NAKED register_t __cdecl internal_626d310()
{
    __asm
    {
        mov eax, 8
        ret 
        UNREACHABLE_TRAP(0x626d310)
    }
}
