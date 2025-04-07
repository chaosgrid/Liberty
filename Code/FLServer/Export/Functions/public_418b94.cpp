#include "FLServer-PCH.h"

PROC_DECLARE(0x418b94, internal_418b94, public_418b94);
extern "C" NAKED register_t __cdecl internal_418b94()
{
    __asm
    {
        jmp dword ptr ds : [public_41b458]
        UNREACHABLE_TRAP(0x418b94)
    }
}
