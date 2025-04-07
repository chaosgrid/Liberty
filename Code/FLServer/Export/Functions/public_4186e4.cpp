#include "FLServer-PCH.h"

PROC_DECLARE(0x4186e4, internal_4186e4, public_4186e4);
extern "C" NAKED register_t __cdecl internal_4186e4()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb20]
        UNREACHABLE_TRAP(0x4186e4)
    }
}
