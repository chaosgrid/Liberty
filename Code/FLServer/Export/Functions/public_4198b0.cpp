#include "FLServer-PCH.h"

PROC_DECLARE(0x4198b0, internal_4198b0, public_4198b0);
extern "C" NAKED register_t __cdecl internal_4198b0()
{
    __asm
    {
        jmp dword ptr ds : [public_41b860]
        UNREACHABLE_TRAP(0x4198b0)
    }
}
