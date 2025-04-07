#include "FLServer-PCH.h"

PROC_DECLARE(0x4188e2, internal_4188e2, public_4188e2);
extern "C" NAKED register_t __cdecl internal_4188e2()
{
    __asm
    {
        jmp dword ptr ds : [public_41badc]
        UNREACHABLE_TRAP(0x4188e2)
    }
}
