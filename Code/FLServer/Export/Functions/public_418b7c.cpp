#include "FLServer-PCH.h"

PROC_DECLARE(0x418b7c, internal_418b7c, public_418b7c);
extern "C" NAKED register_t __cdecl internal_418b7c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b448]
        UNREACHABLE_TRAP(0x418b7c)
    }
}
