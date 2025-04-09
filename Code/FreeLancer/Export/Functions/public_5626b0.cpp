#include "Freelancer-PCH.h"

PROC_DECLARE(0x5626b0, internal_5626b0, public_5626b0);
extern "C" NAKED register_t __cdecl internal_5626b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2070]
        mov dword ptr ds : [public_67a478], eax
        ret 
        UNREACHABLE_TRAP(0x5626b0)
    }
}
