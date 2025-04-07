#include "FLServer-PCH.h"

PROC_DECLARE(0x4065f0, internal_4065f0, public_4065f0);
extern "C" NAKED register_t __cdecl internal_4065f0()
{
    __asm
    {
        mov word ptr ds : [public_4261e4], 4
        mov byte ptr ds : [public_4261e6], 1
        ret 
        UNREACHABLE_TRAP(0x4065f0)
    }
}
