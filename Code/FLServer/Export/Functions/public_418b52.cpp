#include "FLServer-PCH.h"

PROC_DECLARE(0x418b52, internal_418b52, public_418b52);
extern "C" NAKED register_t __cdecl internal_418b52()
{
    __asm
    {
        jmp dword ptr ds : [public_41b42c]
        UNREACHABLE_TRAP(0x418b52)
    }
}
