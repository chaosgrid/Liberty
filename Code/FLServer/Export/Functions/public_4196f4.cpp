#include "FLServer-PCH.h"

PROC_DECLARE(0x4196f4, internal_4196f4, public_4196f4);
extern "C" NAKED register_t __cdecl internal_4196f4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b180]
        UNREACHABLE_TRAP(0x4196f4)
    }
}
