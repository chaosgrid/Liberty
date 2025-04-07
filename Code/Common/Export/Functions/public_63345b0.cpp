#include "Common-PCH.h"

PROC_DECLARE(0x63345b0, internal_63345b0, public_63345b0);
extern "C" NAKED register_t __cdecl internal_63345b0()
{
    __asm
    {
        mov word ptr ds : [ecx], 0xFFF0
        ret 
        UNREACHABLE_TRAP(0x63345b0)
    }
}
