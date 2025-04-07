#include "FLServer-PCH.h"

PROC_DECLARE(0x4198da, internal_4198da, public_4198da);
extern "C" NAKED register_t __cdecl internal_4198da()
{
    __asm
    {
        jmp dword ptr ds : [public_41b838]
        UNREACHABLE_TRAP(0x4198da)
    }
}
