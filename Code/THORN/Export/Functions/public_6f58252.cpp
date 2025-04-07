#include "THORN-PCH.h"

PROC_DECLARE(0x6f58252, internal_6f58252, public_6f58252);
extern "C" NAKED register_t __cdecl internal_6f58252()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0c8]
        UNREACHABLE_TRAP(0x6f58252)
    }
}
