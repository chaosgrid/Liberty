#include "Common-PCH.h"

PROC_DECLARE(0x63623f0, internal_63623f0, public_63623f0);
extern "C" NAKED register_t __cdecl internal_63623f0()
{
    __asm
    {
        mov dword ptr ds : [0], 0
        ret 0xC
        UNREACHABLE_TRAP(0x63623f0)
    }
}
