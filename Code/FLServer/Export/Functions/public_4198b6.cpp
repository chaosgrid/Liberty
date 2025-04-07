#include "FLServer-PCH.h"

PROC_DECLARE(0x4198b6, internal_4198b6, public_4198b6);
extern "C" NAKED register_t __cdecl internal_4198b6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b85c]
        UNREACHABLE_TRAP(0x4198b6)
    }
}
