#include "FLServer-PCH.h"

PROC_DECLARE(0x418b88, internal_418b88, public_418b88);
extern "C" NAKED register_t __cdecl internal_418b88()
{
    __asm
    {
        jmp dword ptr ds : [public_41b450]
        UNREACHABLE_TRAP(0x418b88)
    }
}
