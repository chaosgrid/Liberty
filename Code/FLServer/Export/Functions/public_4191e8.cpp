#include "FLServer-PCH.h"

PROC_DECLARE(0x4191e8, internal_4191e8, public_4191e8);
extern "C" NAKED register_t __cdecl internal_4191e8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b260]
        UNREACHABLE_TRAP(0x4191e8)
    }
}
