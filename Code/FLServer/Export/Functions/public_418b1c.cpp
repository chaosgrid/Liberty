#include "FLServer-PCH.h"

PROC_DECLARE(0x418b1c, internal_418b1c, public_418b1c);
extern "C" NAKED register_t __cdecl internal_418b1c()
{
    __asm
    {
        jmp dword ptr ds : [public_41b408]
        UNREACHABLE_TRAP(0x418b1c)
    }
}
