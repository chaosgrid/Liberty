#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e68, internal_6f57e68, public_6f57e68);
extern "C" NAKED register_t __cdecl internal_6f57e68()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a040]
        UNREACHABLE_TRAP(0x6f57e68)
    }
}
