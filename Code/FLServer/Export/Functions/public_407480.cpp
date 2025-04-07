#include "FLServer-PCH.h"

PROC_DECLARE(0x407480, internal_407480, public_407480);
extern "C" NAKED register_t __cdecl internal_407480()
{
    __asm
    {
        mov word ptr ds : [public_42625c], 3
        mov byte ptr ds : [public_42625e], 1
        ret 
        UNREACHABLE_TRAP(0x407480)
    }
}
