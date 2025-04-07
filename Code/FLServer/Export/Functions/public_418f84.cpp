#include "FLServer-PCH.h"

PROC_DECLARE(0x418f84, internal_418f84, public_418f84);
extern "C" NAKED register_t __cdecl internal_418f84()
{
    __asm
    {
        jmp dword ptr ds : [public_41b708]
        UNREACHABLE_TRAP(0x418f84)
    }
}
