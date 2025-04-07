#include "FLServer-PCH.h"

PROC_DECLARE(0x4065b0, internal_4065b0, public_4065b0);
extern "C" NAKED register_t __cdecl internal_4065b0()
{
    __asm
    {
        mov word ptr ds : [public_4261ec], 2
        mov byte ptr ds : [public_4261ee], 1
        ret 
        UNREACHABLE_TRAP(0x4065b0)
    }
}
