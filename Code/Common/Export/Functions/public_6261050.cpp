#include "Common-PCH.h"

PROC_DECLARE(0x6261050, internal_6261050, public_6261050);
extern "C" NAKED register_t __cdecl internal_6261050()
{
    __asm
    {
        mov byte ptr ds : [ecx], 0
        ret 
        UNREACHABLE_TRAP(0x6261050)
    }
}
