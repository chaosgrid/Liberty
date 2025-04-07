#include "Freelancer-PCH.h"

PROC_DECLARE(0x401020, internal_401020, public_401020);
extern "C" NAKED register_t __cdecl internal_401020()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c7330]
        mov dword ptr ds : [public_616454], eax
        ret 
        UNREACHABLE_TRAP(0x401020)
    }
}
