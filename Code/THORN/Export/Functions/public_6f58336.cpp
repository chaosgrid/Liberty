#include "THORN-PCH.h"

PROC_DECLARE(0x6f58336, internal_6f58336, public_6f58336);
extern "C" NAKED register_t __cdecl internal_6f58336()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a160]
        UNREACHABLE_TRAP(0x6f58336)
    }
}
