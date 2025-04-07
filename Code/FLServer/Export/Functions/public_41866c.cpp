#include "FLServer-PCH.h"

PROC_DECLARE(0x41866c, internal_41866c, public_41866c);
extern "C" NAKED register_t __cdecl internal_41866c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b094]
        UNREACHABLE_TRAP(0x41866c)
    }
}
