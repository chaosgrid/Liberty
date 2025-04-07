#include "THORN-PCH.h"

PROC_DECLARE(0x6f5824c, internal_6f5824c, public_6f5824c);
extern "C" NAKED register_t __cdecl internal_6f5824c()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0c4]
        UNREACHABLE_TRAP(0x6f5824c)
    }
}
