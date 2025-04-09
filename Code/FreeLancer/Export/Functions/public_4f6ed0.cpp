#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6ed0, internal_4f6ed0, public_4f6ed0);
extern "C" NAKED register_t __cdecl internal_4f6ed0()
{
    __asm
    {
        mov dword ptr ds : [public_674f3c], 0xFFFFFFFF
        ret 
        UNREACHABLE_TRAP(0x4f6ed0)
    }
}
