#include "FLServer-PCH.h"

PROC_DECLARE(0x418e7c, internal_418e7c, public_418e7c);
extern "C" NAKED register_t __cdecl internal_418e7c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b650]
        UNREACHABLE_TRAP(0x418e7c)
    }
}
