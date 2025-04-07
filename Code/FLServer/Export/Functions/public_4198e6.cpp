#include "FLServer-PCH.h"

PROC_DECLARE(0x4198e6, internal_4198e6, public_4198e6);
extern "C" NAKED register_t __cdecl internal_4198e6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b884]
        UNREACHABLE_TRAP(0x4198e6)
    }
}
