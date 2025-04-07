#include "THORN-PCH.h"

PROC_DECLARE(0x6f58276, internal_6f58276, public_6f58276);
extern "C" NAKED register_t __cdecl internal_6f58276()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0e0]
        UNREACHABLE_TRAP(0x6f58276)
    }
}
