#include "FLServer-PCH.h"

PROC_DECLARE(0x40ec70, internal_40ec70, public_40ec70);
extern "C" NAKED register_t __cdecl internal_40ec70()
{
    __asm
    {
        mov eax, offset public_41d700
        ret 
        UNREACHABLE_TRAP(0x40ec70)
    }
}
