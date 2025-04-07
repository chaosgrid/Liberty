#include "FLServer-PCH.h"

PROC_DECLARE(0x4196c4, internal_4196c4, public_4196c4);
extern "C" NAKED register_t __cdecl internal_4196c4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b1a0]
        UNREACHABLE_TRAP(0x4196c4)
    }
}
