#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a450, internal_6f4a450, public_6f4a450);
extern "C" NAKED register_t __cdecl internal_6f4a450()
{
    __asm
    {
        fld dword ptr ds : [public_6f5a1d4]
        ret 8
        UNREACHABLE_TRAP(0x6f4a450)
    }
}
