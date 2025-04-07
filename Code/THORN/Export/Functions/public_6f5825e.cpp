#include "THORN-PCH.h"

PROC_DECLARE(0x6f5825e, internal_6f5825e, public_6f5825e);
extern "C" NAKED register_t __cdecl internal_6f5825e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0d0]
        UNREACHABLE_TRAP(0x6f5825e)
    }
}
