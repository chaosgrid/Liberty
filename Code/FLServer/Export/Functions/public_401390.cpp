#include "FLServer-PCH.h"

PROC_DECLARE(0x401390, internal_401390, public_401390);
extern "C" NAKED register_t __cdecl internal_401390()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_425f2c], ax
        mov byte ptr ds : [public_425f2e], al
        ret 
        UNREACHABLE_TRAP(0x401390)
    }
}
