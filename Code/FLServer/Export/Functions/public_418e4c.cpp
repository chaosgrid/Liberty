#include "FLServer-PCH.h"

PROC_DECLARE(0x418e4c, internal_418e4c, public_418e4c);
extern "C" NAKED register_t __cdecl internal_418e4c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b630]
        UNREACHABLE_TRAP(0x418e4c)
    }
}
