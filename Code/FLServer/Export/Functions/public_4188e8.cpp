#include "FLServer-PCH.h"

PROC_DECLARE(0x4188e8, internal_4188e8, public_4188e8);
extern "C" NAKED register_t __cdecl internal_4188e8()
{
    __asm
    {
        jmp dword ptr ds : [public_41bae0]
        UNREACHABLE_TRAP(0x4188e8)
    }
}
