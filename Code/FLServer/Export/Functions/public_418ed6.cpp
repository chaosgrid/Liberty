#include "FLServer-PCH.h"

PROC_DECLARE(0x418ed6, internal_418ed6, public_418ed6);
extern "C" NAKED register_t __cdecl internal_418ed6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b68c]
        UNREACHABLE_TRAP(0x418ed6)
    }
}
