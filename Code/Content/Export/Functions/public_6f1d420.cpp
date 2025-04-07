#include "Content-PCH.h"

PROC_DECLARE(0x6f1d420, internal_6f1d420, public_6f1d420);
extern "C" NAKED register_t __cdecl internal_6f1d420()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x25]
        ret 
        UNREACHABLE_TRAP(0x6f1d420)
    }
}
