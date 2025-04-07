#include "FLServer-PCH.h"

PROC_DECLARE(0x4010a0, internal_4010a0, public_4010a0);
extern "C" NAKED register_t __cdecl internal_4010a0()
{
    __asm
    {
        mov word ptr ds : [public_425f0c], 3
        mov byte ptr ds : [public_425f0e], 1
        ret 
        UNREACHABLE_TRAP(0x4010a0)
    }
}
