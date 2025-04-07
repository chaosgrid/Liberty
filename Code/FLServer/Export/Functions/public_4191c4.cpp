#include "FLServer-PCH.h"

PROC_DECLARE(0x4191c4, internal_4191c4, public_4191c4);
extern "C" NAKED register_t __cdecl internal_4191c4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b278]
        UNREACHABLE_TRAP(0x4191c4)
    }
}
