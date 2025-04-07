#include "THORN-PCH.h"

PROC_DECLARE(0x6f582dc, internal_6f582dc, public_6f582dc);
extern "C" NAKED register_t __cdecl internal_6f582dc()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a124]
        UNREACHABLE_TRAP(0x6f582dc)
    }
}
