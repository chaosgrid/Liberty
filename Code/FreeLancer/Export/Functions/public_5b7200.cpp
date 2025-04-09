#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7200, internal_5b7200, public_5b7200);
extern "C" NAKED register_t __cdecl internal_5b7200()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6758]
        UNREACHABLE_TRAP(0x5b7200)
    }
}
