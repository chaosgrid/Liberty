#include "FLServer-PCH.h"

PROC_DECLARE(0x41897e, internal_41897e, public_41897e);
extern "C" NAKED register_t __cdecl internal_41897e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2f0]
        UNREACHABLE_TRAP(0x41897e)
    }
}
