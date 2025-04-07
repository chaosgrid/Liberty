#include "FLServer-PCH.h"

PROC_DECLARE(0x418b6a, internal_418b6a, public_418b6a);
extern "C" NAKED register_t __cdecl internal_418b6a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b43c]
        UNREACHABLE_TRAP(0x418b6a)
    }
}
