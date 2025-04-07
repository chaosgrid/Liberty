#include "FLServer-PCH.h"

PROC_DECLARE(0x41982c, internal_41982c, public_41982c);
extern "C" NAKED register_t __cdecl internal_41982c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b110]
        UNREACHABLE_TRAP(0x41982c)
    }
}
