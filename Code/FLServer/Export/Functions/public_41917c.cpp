#include "FLServer-PCH.h"

PROC_DECLARE(0x41917c, internal_41917c, public_41917c);
extern "C" NAKED register_t __cdecl internal_41917c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2b4]
        UNREACHABLE_TRAP(0x41917c)
    }
}
