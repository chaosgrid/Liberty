#include "FLServer-PCH.h"

PROC_DECLARE(0x401400, internal_401400, public_401400);
extern "C" NAKED register_t __cdecl internal_401400()
{
    __asm
    {
        mov word ptr ds : [public_425f34], 3
        mov byte ptr ds : [public_425f36], 1
        ret 
        UNREACHABLE_TRAP(0x401400)
    }
}
