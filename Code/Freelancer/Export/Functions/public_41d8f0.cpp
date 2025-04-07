#include "Freelancer-PCH.h"

PROC_DECLARE(0x41d8f0, internal_41d8f0, public_41d8f0);
extern "C" NAKED register_t __cdecl internal_41d8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c94dc]
        mov dword ptr ds : [public_616830], eax
        ret 
        UNREACHABLE_TRAP(0x41d8f0)
    }
}
