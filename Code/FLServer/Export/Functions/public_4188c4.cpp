#include "FLServer-PCH.h"

PROC_DECLARE(0x4188c4, internal_4188c4, public_4188c4);
extern "C" NAKED register_t __cdecl internal_4188c4()
{
    __asm
    {
        jmp dword ptr ds : [public_41bac8]
        UNREACHABLE_TRAP(0x4188c4)
    }
}
