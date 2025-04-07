#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a5f0, internal_6f4a5f0, public_6f4a5f0);
extern "C" NAKED register_t __cdecl internal_6f4a5f0()
{
    __asm
    {
        fld dword ptr ds : [public_6f5a1d4]
        ret 8
        UNREACHABLE_TRAP(0x6f4a5f0)
    }
}
