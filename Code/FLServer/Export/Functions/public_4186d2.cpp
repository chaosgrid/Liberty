#include "FLServer-PCH.h"

PROC_DECLARE(0x4186d2, internal_4186d2, public_4186d2);
extern "C" NAKED register_t __cdecl internal_4186d2()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb2c]
        UNREACHABLE_TRAP(0x4186d2)
    }
}
