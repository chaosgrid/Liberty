#include "FLServer-PCH.h"

PROC_DECLARE(0x4198c2, internal_4198c2, public_4198c2);
extern "C" NAKED register_t __cdecl internal_4198c2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b854]
        UNREACHABLE_TRAP(0x4198c2)
    }
}
