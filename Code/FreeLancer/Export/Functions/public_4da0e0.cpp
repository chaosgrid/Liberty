#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4da0e0, internal_4da0e0, public_4da0e0);
extern "C" NAKED register_t __cdecl internal_4da0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8478]
        mov dword ptr ds : [public_674a94], eax
        ret 
        UNREACHABLE_TRAP(0x4da0e0)
    }
}
