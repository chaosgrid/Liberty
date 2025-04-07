#include "FLServer-PCH.h"

PROC_DECLARE(0x4196e8, internal_4196e8, public_4196e8);
extern "C" NAKED register_t __cdecl internal_4196e8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b188]
        UNREACHABLE_TRAP(0x4196e8)
    }
}
