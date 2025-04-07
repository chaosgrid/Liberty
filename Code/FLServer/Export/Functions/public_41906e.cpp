#include "FLServer-PCH.h"

PROC_DECLARE(0x41906e, internal_41906e, public_41906e);
extern "C" NAKED register_t __cdecl internal_41906e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b7b0]
        UNREACHABLE_TRAP(0x41906e)
    }
}
