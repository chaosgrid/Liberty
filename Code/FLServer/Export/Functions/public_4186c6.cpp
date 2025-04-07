#include "FLServer-PCH.h"

PROC_DECLARE(0x4186c6, internal_4186c6, public_4186c6);
extern "C" NAKED register_t __cdecl internal_4186c6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb34]
        UNREACHABLE_TRAP(0x4186c6)
    }
}
