#include "FLServer-PCH.h"

PROC_DECLARE(0x41887c, internal_41887c, public_41887c);
extern "C" NAKED register_t __cdecl internal_41887c()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba08]
        UNREACHABLE_TRAP(0x41887c)
    }
}
