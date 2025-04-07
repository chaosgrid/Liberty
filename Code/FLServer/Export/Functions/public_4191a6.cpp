#include "FLServer-PCH.h"

PROC_DECLARE(0x4191a6, internal_4191a6, public_4191a6);
extern "C" NAKED register_t __cdecl internal_4191a6()
{
    __asm
    {
        jmp dword ptr ds : [public_41b28c]
        UNREACHABLE_TRAP(0x4191a6)
    }
}
