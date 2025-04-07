#include "THORN-PCH.h"

PROC_DECLARE(0x6f57e38, internal_6f57e38, public_6f57e38);
extern "C" NAKED register_t __cdecl internal_6f57e38()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a018]
        UNREACHABLE_TRAP(0x6f57e38)
    }
}
