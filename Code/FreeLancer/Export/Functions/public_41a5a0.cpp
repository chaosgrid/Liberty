#include "Freelancer-PCH.h"

PROC_DECLARE(0x41a5a0, internal_41a5a0, public_41a5a0);
extern "C" NAKED register_t __cdecl internal_41a5a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9024]
        mov dword ptr ds : [public_6166cc], eax
        ret 
        UNREACHABLE_TRAP(0x41a5a0)
    }
}
