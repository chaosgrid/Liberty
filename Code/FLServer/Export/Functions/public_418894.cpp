#include "FLServer-PCH.h"

PROC_DECLARE(0x418894, internal_418894, public_418894);
extern "C" NAKED register_t __cdecl internal_418894()
{
    __asm
    {
        jmp dword ptr ds : [public_41baa8]
        UNREACHABLE_TRAP(0x418894)
    }
}
