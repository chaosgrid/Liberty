#include "FLServer-PCH.h"

PROC_DECLARE(0x4188a0, internal_4188a0, public_4188a0);
extern "C" NAKED register_t __cdecl internal_4188a0()
{
    __asm
    {
        jmp dword ptr ds : [public_41bab0]
        UNREACHABLE_TRAP(0x4188a0)
    }
}
