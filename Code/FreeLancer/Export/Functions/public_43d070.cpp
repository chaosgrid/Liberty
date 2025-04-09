#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d070, internal_43d070, public_43d070);
extern "C" NAKED register_t __cdecl internal_43d070()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6687a0], ax
        mov byte ptr ds : [public_6687a2], al
        ret 
        UNREACHABLE_TRAP(0x43d070)
    }
}
