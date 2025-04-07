#include "FLServer-PCH.h"

PROC_DECLARE(0x4198f8, internal_4198f8, public_4198f8);
extern "C" NAKED register_t __cdecl internal_4198f8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b89c]
        UNREACHABLE_TRAP(0x4198f8)
    }
}
