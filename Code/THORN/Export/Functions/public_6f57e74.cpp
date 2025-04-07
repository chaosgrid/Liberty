#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e74, internal_6f57e74, public_6f57e74);
extern "C" NAKED register_t __cdecl internal_6f57e74()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a048]
        UNREACHABLE_TRAP(0x6f57e74)
    }
}
