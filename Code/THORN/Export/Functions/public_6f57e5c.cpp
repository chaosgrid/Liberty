#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e5c, internal_6f57e5c, public_6f57e5c);
extern "C" NAKED register_t __cdecl internal_6f57e5c()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a034]
        UNREACHABLE_TRAP(0x6f57e5c)
    }
}
