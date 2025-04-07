#include "FLServer-PCH.h"

PROC_DECLARE(0x4196b8, internal_4196b8, public_4196b8);
extern "C" NAKED register_t __cdecl internal_4196b8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1a8]
        UNREACHABLE_TRAP(0x4196b8)
    }
}
