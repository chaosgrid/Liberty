#include "FLServer-PCH.h"

PROC_DECLARE(0x418f3c, internal_418f3c, public_418f3c);
extern "C" NAKED register_t __cdecl internal_418f3c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6d8]
        UNREACHABLE_TRAP(0x418f3c)
    }
}
