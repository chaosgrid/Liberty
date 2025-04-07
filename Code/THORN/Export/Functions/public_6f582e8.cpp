#include "THORN-PCH.h"

PROC_DECLARE(0x6f582e8, internal_6f582e8, public_6f582e8);
extern "C" NAKED register_t __cdecl internal_6f582e8()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a12c]
        UNREACHABLE_TRAP(0x6f582e8)
    }
}
