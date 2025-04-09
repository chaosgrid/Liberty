#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7e2e, internal_5b7e2e, public_5b7e2e);
extern "C" NAKED register_t __cdecl internal_5b7e2e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6fcc]
        UNREACHABLE_TRAP(0x5b7e2e)
    }
}
