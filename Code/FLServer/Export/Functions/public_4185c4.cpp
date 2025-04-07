#include "FLServer-PCH.h"

PROC_DECLARE(0x4185c4, internal_4185c4, public_4185c4);
extern "C" NAKED register_t __cdecl internal_4185c4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0ac]
        UNREACHABLE_TRAP(0x4185c4)
    }
}
