#include "FLServer-PCH.h"

PROC_DECLARE(0x413620, internal_413620, public_413620);
extern "C" NAKED register_t __cdecl internal_413620()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_428c7c], ax
        mov byte ptr ds : [public_428c7e], al
        ret 
        UNREACHABLE_TRAP(0x413620)
    }
}
