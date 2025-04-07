#include "Freelancer-PCH.h"

PROC_DECLARE(0x414850, internal_414850, public_414850);
extern "C" NAKED register_t __cdecl internal_414850()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        mov byte ptr ds : [ecx+0x28], al
        ret 4
        UNREACHABLE_TRAP(0x414850)
    }
}
