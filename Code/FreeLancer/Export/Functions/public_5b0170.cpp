#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b0170, internal_5b0170, public_5b0170);
extern "C" NAKED register_t __cdecl internal_5b0170()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_67ec8c], ax
        mov byte ptr ds : [public_67ec8e], al
        ret 
        UNREACHABLE_TRAP(0x5b0170)
    }
}
