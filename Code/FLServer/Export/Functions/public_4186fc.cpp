#include "FLServer-PCH.h"

PROC_DECLARE(0x4186fc, internal_4186fc, public_4186fc);
extern "C" NAKED register_t __cdecl internal_4186fc()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb10]
        UNREACHABLE_TRAP(0x4186fc)
    }
}
