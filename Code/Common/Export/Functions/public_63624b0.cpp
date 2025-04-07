#include "Common-PCH.h"

PROC_DECLARE(0x63624b0, internal_63624b0, public_63624b0);
extern "C" NAKED register_t __cdecl internal_63624b0()
{
    __asm
    {
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x63624b0)
    }
}
