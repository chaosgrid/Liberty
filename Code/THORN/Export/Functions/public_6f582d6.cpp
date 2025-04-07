#include "THORN-PCH.h"

PROC_DECLARE(0x6f582d6, internal_6f582d6, public_6f582d6);
extern "C" NAKED register_t __cdecl internal_6f582d6()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a120]
        UNREACHABLE_TRAP(0x6f582d6)
    }
}
