#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f6e90, internal_4f6e90, public_4f6e90);
extern "C" NAKED register_t __cdecl internal_4f6e90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d99d4]
        mov dword ptr ds : [public_674f4c], eax
        ret 
        UNREACHABLE_TRAP(0x4f6e90)
    }
}
