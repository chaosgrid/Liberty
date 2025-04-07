#include "Server-PCH.h"

PROC_DECLARE(0x6ce65c0, internal_6ce65c0, public_6ce65c0);
extern "C" NAKED register_t __cdecl internal_6ce65c0()
{
    __asm
    {
        mov word ptr ds : [public_6d8d6a4], 2
        mov byte ptr ds : [public_6d8d6a6], 1
        ret 
        UNREACHABLE_TRAP(0x6ce65c0)
    }
}
