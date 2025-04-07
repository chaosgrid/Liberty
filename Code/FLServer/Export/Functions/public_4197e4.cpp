#include "FLServer-PCH.h"

PROC_DECLARE(0x4197e4, internal_4197e4, public_4197e4);
extern "C" NAKED register_t __cdecl internal_4197e4()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbd8]
        UNREACHABLE_TRAP(0x4197e4)
    }
}
