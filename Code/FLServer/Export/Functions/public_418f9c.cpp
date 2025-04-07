#include "FLServer-PCH.h"

PROC_DECLARE(0x418f9c, internal_418f9c, public_418f9c);
extern "C" NAKED register_t __cdecl internal_418f9c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b718]
        UNREACHABLE_TRAP(0x418f9c)
    }
}
