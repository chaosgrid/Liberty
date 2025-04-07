#include "FLServer-PCH.h"

PROC_DECLARE(0x4186f0, internal_4186f0, public_4186f0);
extern "C" NAKED register_t __cdecl internal_4186f0()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb18]
        UNREACHABLE_TRAP(0x4186f0)
    }
}
