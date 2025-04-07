#include "FLServer-PCH.h"

PROC_DECLARE(0x418b0a, internal_418b0a, public_418b0a);
extern "C" NAKED register_t __cdecl internal_418b0a()
{
    __asm
    {
        jmp dword ptr ds : [public_41b3fc]
        UNREACHABLE_TRAP(0x418b0a)
    }
}
