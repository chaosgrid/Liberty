#include "FLServer-PCH.h"

PROC_DECLARE(0x4186ea, internal_4186ea, public_4186ea);
extern "C" NAKED register_t __cdecl internal_4186ea()
{
    __asm
    {
        jmp dword ptr ds : [public_41bb1c]
        UNREACHABLE_TRAP(0x4186ea)
    }
}
