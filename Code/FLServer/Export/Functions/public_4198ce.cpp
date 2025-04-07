#include "FLServer-PCH.h"

PROC_DECLARE(0x4198ce, internal_4198ce, public_4198ce);
extern "C" NAKED register_t __cdecl internal_4198ce()
{
    __asm
    {
        jmp dword ptr ds : [public_41b84c]
        UNREACHABLE_TRAP(0x4198ce)
    }
}
