#include "FLServer-PCH.h"

PROC_DECLARE(0x4027e0, internal_4027e0, public_4027e0);
extern "C" NAKED register_t __cdecl internal_4027e0()
{
    __asm
    {
        mov eax, offset public_41c0ac
        ret 
        UNREACHABLE_TRAP(0x4027e0)
    }
}
