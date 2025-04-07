#include "FLServer-PCH.h"

PROC_DECLARE(0x4198c8, internal_4198c8, public_4198c8);
extern "C" NAKED register_t __cdecl internal_4198c8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b850]
        UNREACHABLE_TRAP(0x4198c8)
    }
}
