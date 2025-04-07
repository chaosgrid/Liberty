#include "Server-PCH.h"

PROC_DECLARE(0x6d18930, internal_6d18930, public_6d18930);
extern "C" NAKED register_t __cdecl internal_6d18930()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_6d8f5f0], ax
        mov byte ptr ds : [public_6d8f5f2], al
        ret 
        UNREACHABLE_TRAP(0x6d18930)
    }
}
