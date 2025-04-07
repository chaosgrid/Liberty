#include "FLServer-PCH.h"

PROC_DECLARE(0x418b3a, internal_418b3a, public_418b3a);
extern "C" NAKED register_t __cdecl internal_418b3a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b41c]
        UNREACHABLE_TRAP(0x418b3a)
    }
}
