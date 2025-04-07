#include "THORN-PCH.h"

PROC_DECLARE(0x6f58282, internal_6f58282, public_6f58282);
extern "C" NAKED register_t __cdecl internal_6f58282()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0e8]
        UNREACHABLE_TRAP(0x6f58282)
    }
}
