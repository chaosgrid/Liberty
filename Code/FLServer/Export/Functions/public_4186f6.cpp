#include "FLServer-PCH.h"

PROC_DECLARE(0x4186f6, internal_4186f6, public_4186f6);
extern "C" NAKED register_t __cdecl internal_4186f6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb14]
        UNREACHABLE_TRAP(0x4186f6)
    }
}
