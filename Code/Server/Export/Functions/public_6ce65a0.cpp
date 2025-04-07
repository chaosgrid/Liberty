#include "Server-PCH.h"

PROC_DECLARE(0x6ce65a0, internal_6ce65a0, public_6ce65a0);
extern "C" NAKED register_t __cdecl internal_6ce65a0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_6d8d6a8], ax
        mov byte ptr ds : [public_6d8d6aa], al
        ret 
        UNREACHABLE_TRAP(0x6ce65a0)
    }
}
