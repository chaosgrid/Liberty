#include "Freelancer-PCH.h"

PROC_DECLARE(0x489fd0, internal_489fd0, public_489fd0);
extern "C" NAKED register_t __cdecl internal_489fd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d24b4]
        mov dword ptr ds : [public_671fe4], eax
        ret 
        UNREACHABLE_TRAP(0x489fd0)
    }
}
