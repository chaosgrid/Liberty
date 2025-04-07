#include "THORN-PCH.h"

PROC_DECLARE(0x6f582d0, internal_6f582d0, public_6f582d0);
extern "C" NAKED register_t __cdecl internal_6f582d0()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a11c]
        UNREACHABLE_TRAP(0x6f582d0)
    }
}
