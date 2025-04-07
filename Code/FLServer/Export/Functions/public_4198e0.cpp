#include "FLServer-PCH.h"

PROC_DECLARE(0x4198e0, internal_4198e0, public_4198e0);
extern "C" NAKED register_t __cdecl internal_4198e0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b82c]
        UNREACHABLE_TRAP(0x4198e0)
    }
}
