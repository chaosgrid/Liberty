#include "FLServer-PCH.h"

PROC_DECLARE(0x4198f2, internal_4198f2, public_4198f2);
extern "C" NAKED register_t __cdecl internal_4198f2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b898]
        UNREACHABLE_TRAP(0x4198f2)
    }
}
