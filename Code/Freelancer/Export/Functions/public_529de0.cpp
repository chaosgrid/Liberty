#include "Freelancer-PCH.h"

PROC_DECLARE(0x529de0, internal_529de0, public_529de0);
extern "C" NAKED register_t __cdecl internal_529de0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd180]
        mov dword ptr ds : [public_67541c], eax
        ret 
        UNREACHABLE_TRAP(0x529de0)
    }
}
