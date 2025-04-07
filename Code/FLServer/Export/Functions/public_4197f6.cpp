#include "FLServer-PCH.h"

PROC_DECLARE(0x4197f6, internal_4197f6, public_4197f6);
extern "C" NAKED register_t __cdecl internal_4197f6()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbcc]
        UNREACHABLE_TRAP(0x4197f6)
    }
}
