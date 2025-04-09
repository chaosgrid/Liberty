#include "FreeLancer-PCH.h"

PROC_DECLARE(0x563aa0, internal_563aa0, public_563aa0);
extern "C" NAKED register_t __cdecl internal_563aa0()
{
    __asm
    {
        mov dword ptr ds : [public_67a488], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x563aa0)
    }
}
