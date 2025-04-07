#include "FLServer-PCH.h"

PROC_DECLARE(0x413cb0, internal_413cb0, public_413cb0);
extern "C" NAKED register_t __cdecl internal_413cb0()
{
    __asm
    {
        mov word ptr ds : [public_4294e4], 4
        mov byte ptr ds : [public_4294e6], 1
        ret 
        UNREACHABLE_TRAP(0x413cb0)
    }
}
