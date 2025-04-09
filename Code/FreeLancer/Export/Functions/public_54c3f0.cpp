#include "FreeLancer-PCH.h"

PROC_DECLARE(0x54c3f0, internal_54c3f0, public_54c3f0);
extern "C" NAKED register_t __cdecl internal_54c3f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0950]
        mov dword ptr ds : [public_67985c], eax
        ret 
        UNREACHABLE_TRAP(0x54c3f0)
    }
}
