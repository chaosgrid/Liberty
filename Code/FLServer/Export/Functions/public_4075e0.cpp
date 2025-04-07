#include "FLServer-PCH.h"

PROC_DECLARE(0x4075e0, internal_4075e0, public_4075e0);
extern "C" NAKED register_t __cdecl internal_4075e0()
{
    __asm
    {
        mov eax, offset public_41c968
        ret 
        UNREACHABLE_TRAP(0x4075e0)
    }
}
