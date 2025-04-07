#include "FLServer-PCH.h"

PROC_DECLARE(0x4191b8, internal_4191b8, public_4191b8);
extern "C" NAKED register_t __cdecl internal_4191b8()
{
    __asm
    {
        jmp dword ptr ds : [public_41b280]
        UNREACHABLE_TRAP(0x4191b8)
    }
}
