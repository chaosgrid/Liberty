#include "FLServer-PCH.h"

PROC_DECLARE(0x4197d8, internal_4197d8, public_4197d8);
extern "C" NAKED register_t __cdecl internal_4197d8()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbe0]
        UNREACHABLE_TRAP(0x4197d8)
    }
}
