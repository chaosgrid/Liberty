#include "Freelancer-PCH.h"

PROC_DECLARE(0x587de0, internal_587de0, public_587de0);
extern "C" NAKED register_t __cdecl internal_587de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4d64]
        mov dword ptr ds : [public_67c538], eax
        ret 
        UNREACHABLE_TRAP(0x587de0)
    }
}
