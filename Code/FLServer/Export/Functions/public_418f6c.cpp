#include "FLServer-PCH.h"

PROC_DECLARE(0x418f6c, internal_418f6c, public_418f6c);
extern "C" NAKED register_t __cdecl internal_418f6c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6f8]
        UNREACHABLE_TRAP(0x418f6c)
    }
}
