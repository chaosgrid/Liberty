#include "Common-PCH.h"

PROC_DECLARE(0x6271480, internal_6271480, public_6271480);
extern "C" NAKED register_t __cdecl internal_6271480()
{
    __asm
    {
        mov eax, offset public_63fbb74
        ret 
        UNREACHABLE_TRAP(0x6271480)
    }
}
