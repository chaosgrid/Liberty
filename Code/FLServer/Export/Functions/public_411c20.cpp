#include "FLServer-PCH.h"

PROC_DECLARE(0x411c20, internal_411c20, public_411c20);
extern "C" NAKED register_t __cdecl internal_411c20()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_427cfc], ax
        mov byte ptr ds : [public_427cfe], al
        ret 
        UNREACHABLE_TRAP(0x411c20)
    }
}
