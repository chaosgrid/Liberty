#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5792d0, internal_5792d0, public_5792d0);
extern "C" NAKED register_t __cdecl internal_5792d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4558]
        mov dword ptr ds : [public_67c47c], eax
        ret 
        UNREACHABLE_TRAP(0x5792d0)
    }
}
