#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b82e2, internal_5b82e2, public_5b82e2);
extern "C" NAKED register_t __cdecl internal_5b82e2()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e64]
        UNREACHABLE_TRAP(0x5b82e2)
    }
}
