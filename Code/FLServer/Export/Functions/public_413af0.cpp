#include "FLServer-PCH.h"

PROC_DECLARE(0x413af0, internal_413af0, public_413af0);
extern "C" NAKED register_t __cdecl internal_413af0()
{
    __asm
    {
        mov eax, 1
        mov word ptr ds : [public_428ca4], ax
        mov byte ptr ds : [public_428ca6], al
        ret 
        UNREACHABLE_TRAP(0x413af0)
    }
}
