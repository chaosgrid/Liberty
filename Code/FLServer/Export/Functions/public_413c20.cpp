#include "FLServer-PCH.h"

PROC_DECLARE(0x413c20, internal_413c20, public_413c20);
extern "C" NAKED register_t __cdecl internal_413c20()
{
    __asm
    {
        xor eax, eax
        mov word ptr ds : [public_428cd8], ax
        mov byte ptr ds : [public_428cda], al
        ret 
        UNREACHABLE_TRAP(0x413c20)
    }
}
