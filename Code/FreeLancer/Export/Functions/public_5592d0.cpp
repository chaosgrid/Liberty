#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5592d0, internal_5592d0, public_5592d0);
extern "C" NAKED register_t __cdecl internal_5592d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e149c]
        mov dword ptr ds : [public_679a1c], eax
        ret 
        UNREACHABLE_TRAP(0x5592d0)
    }
}
