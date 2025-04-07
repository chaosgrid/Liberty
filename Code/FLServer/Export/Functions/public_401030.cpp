#include "FLServer-PCH.h"

PROC_DECLARE(0x401030, internal_401030, public_401030);
extern "C" NAKED register_t __cdecl internal_401030()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_425f04], ax
        mov byte ptr ds : [public_425f06], al
        ret 
        UNREACHABLE_TRAP(0x401030)
    }
}
