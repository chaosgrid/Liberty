#include "FLServer-PCH.h"

PROC_DECLARE(0x401080, internal_401080, public_401080);
extern "C" NAKED register_t __cdecl internal_401080()
{
    __asm
    {
        mov word ptr ds : [public_425f18], 2
        mov byte ptr ds : [public_425f1a], 1
        ret 
        UNREACHABLE_TRAP(0x401080)
    }
}
