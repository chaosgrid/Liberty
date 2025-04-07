#include "FLServer-PCH.h"

PROC_DECLARE(0x418b10, internal_418b10, public_418b10);
extern "C" NAKED register_t __cdecl internal_418b10()
{
    __asm
    {
        jmp dword ptr ds : [public_41b400]
        UNREACHABLE_TRAP(0x418b10)
    }
}
