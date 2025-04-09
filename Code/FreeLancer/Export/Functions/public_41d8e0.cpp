#include "Freelancer-PCH.h"

PROC_DECLARE(0x41d8e0, internal_41d8e0, public_41d8e0);
extern "C" NAKED register_t __cdecl internal_41d8e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c94d8]
        mov dword ptr ds : [public_616834], eax
        ret 
        UNREACHABLE_TRAP(0x41d8e0)
    }
}
