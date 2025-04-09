#include "Freelancer-PCH.h"

PROC_DECLARE(0x59f800, internal_59f800, public_59f800);
extern "C" NAKED register_t __cdecl internal_59f800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5e28]
        mov dword ptr ds : [public_67dd48], eax
        ret 
        UNREACHABLE_TRAP(0x59f800)
    }
}
