#include "Freelancer-PCH.h"

PROC_DECLARE(0x444050, internal_444050, public_444050);
extern "C" NAKED register_t __cdecl internal_444050()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x444050)
    }
}
