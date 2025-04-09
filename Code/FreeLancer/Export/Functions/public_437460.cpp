#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437460, internal_437460, public_437460);
extern "C" NAKED register_t __cdecl internal_437460()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6686e4], ax
        mov byte ptr ds : [public_6686e6], al
        ret 
        UNREACHABLE_TRAP(0x437460)
    }
}
