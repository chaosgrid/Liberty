#include "THORN-PCH.h"

PROC_DECLARE(0x6f582a6, internal_6f582a6, public_6f582a6);
extern "C" NAKED register_t __cdecl internal_6f582a6()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a100]
        UNREACHABLE_TRAP(0x6f582a6)
    }
}
