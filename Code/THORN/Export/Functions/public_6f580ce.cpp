#include "THORN-PCH.h"

PROC_DECLARE(0x6f580ce, internal_6f580ce, public_6f580ce);
extern "C" NAKED register_t __cdecl internal_6f580ce()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a094]
        UNREACHABLE_TRAP(0x6f580ce)
    }
}
