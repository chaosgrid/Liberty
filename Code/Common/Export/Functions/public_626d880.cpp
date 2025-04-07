#include "Common-PCH.h"

PROC_DECLARE(0x626d880, internal_626d880, public_626d880);
extern "C" NAKED register_t __cdecl internal_626d880()
{
    __asm
    {
        mov eax, 0x1A
        ret 
        UNREACHABLE_TRAP(0x626d880)
    }
}
