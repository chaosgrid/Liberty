#include "FLServer-PCH.h"

PROC_DECLARE(0x41878c, internal_41878c, public_41878c);
extern "C" NAKED register_t __cdecl internal_41878c()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba44]
        UNREACHABLE_TRAP(0x41878c)
    }
}
