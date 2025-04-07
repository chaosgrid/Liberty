#include "FLServer-PCH.h"

PROC_DECLARE(0x4197d2, internal_4197d2, public_4197d2);
extern "C" NAKED register_t __cdecl internal_4197d2()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbe4]
        UNREACHABLE_TRAP(0x4197d2)
    }
}
