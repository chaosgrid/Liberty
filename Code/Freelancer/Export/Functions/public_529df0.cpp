#include "Freelancer-PCH.h"

PROC_DECLARE(0x529df0, internal_529df0, public_529df0);
extern "C" NAKED register_t __cdecl internal_529df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd180]
        mov dword ptr ds : [public_675418], eax
        ret 
        UNREACHABLE_TRAP(0x529df0)
    }
}
