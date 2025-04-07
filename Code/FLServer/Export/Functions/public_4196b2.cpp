#include "FLServer-PCH.h"

PROC_DECLARE(0x4196b2, internal_4196b2, public_4196b2);
extern "C" NAKED register_t __cdecl internal_4196b2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1ac]
        UNREACHABLE_TRAP(0x4196b2)
    }
}
