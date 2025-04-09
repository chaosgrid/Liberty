#include "FreeLancer-PCH.h"

PROC_DECLARE(0x564ab0, internal_564ab0, public_564ab0);
extern "C" NAKED register_t __cdecl internal_564ab0()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_67c020], eax
        mov byte ptr ds : [public_67c024], al
        ret 
        UNREACHABLE_TRAP(0x564ab0)
    }
}
