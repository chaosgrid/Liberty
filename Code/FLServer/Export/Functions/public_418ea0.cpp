#include "FLServer-PCH.h"

PROC_DECLARE(0x418ea0, internal_418ea0, public_418ea0);
extern "C" NAKED register_t __cdecl internal_418ea0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b668]
        UNREACHABLE_TRAP(0x418ea0)
    }
}
