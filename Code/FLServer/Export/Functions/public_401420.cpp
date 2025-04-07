#include "FLServer-PCH.h"

PROC_DECLARE(0x401420, internal_401420, public_401420);
extern "C" NAKED register_t __cdecl internal_401420()
{
    __asm
    {
        mov word ptr ds : [public_425f38], 4
        mov byte ptr ds : [public_425f3a], 1
        ret 
        UNREACHABLE_TRAP(0x401420)
    }
}
