#include "FLServer-PCH.h"

PROC_DECLARE(0x418e6a, internal_418e6a, public_418e6a);
extern "C" NAKED register_t __cdecl internal_418e6a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b644]
        UNREACHABLE_TRAP(0x418e6a)
    }
}
