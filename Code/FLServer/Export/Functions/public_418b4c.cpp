#include "FLServer-PCH.h"

PROC_DECLARE(0x418b4c, internal_418b4c, public_418b4c);
extern "C" NAKED register_t __cdecl internal_418b4c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b428]
        UNREACHABLE_TRAP(0x418b4c)
    }
}
