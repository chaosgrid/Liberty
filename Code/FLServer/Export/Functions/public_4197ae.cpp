#include "FLServer-PCH.h"

PROC_DECLARE(0x4197ae, internal_4197ae, public_4197ae);
extern "C" NAKED register_t __cdecl internal_4197ae()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbfc]
        UNREACHABLE_TRAP(0x4197ae)
    }
}
