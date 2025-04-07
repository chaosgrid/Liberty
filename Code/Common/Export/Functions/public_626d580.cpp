#include "Common-PCH.h"

PROC_DECLARE(0x626d580, internal_626d580, public_626d580);
extern "C" NAKED register_t __cdecl internal_626d580()
{
    __asm
    {
        mov eax, 0x14
        ret 
        UNREACHABLE_TRAP(0x626d580)
    }
}
