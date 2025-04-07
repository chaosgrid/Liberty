#include "FLServer-PCH.h"

PROC_DECLARE(0x418ed0, internal_418ed0, public_418ed0);
extern "C" NAKED register_t __cdecl internal_418ed0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b688]
        UNREACHABLE_TRAP(0x418ed0)
    }
}
