#include "FLServer-PCH.h"

PROC_DECLARE(0x418f0c, internal_418f0c, public_418f0c);
extern "C" NAKED register_t __cdecl internal_418f0c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6b0]
        UNREACHABLE_TRAP(0x418f0c)
    }
}
