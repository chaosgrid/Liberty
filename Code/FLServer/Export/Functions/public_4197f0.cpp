#include "FLServer-PCH.h"

PROC_DECLARE(0x4197f0, internal_4197f0, public_4197f0);
extern "C" NAKED register_t __cdecl internal_4197f0()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbd0]
        UNREACHABLE_TRAP(0x4197f0)
    }
}
