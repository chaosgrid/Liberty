#include "Freelancer-PCH.h"

PROC_DECLARE(0x43d650, internal_43d650, public_43d650);
extern "C" NAKED register_t __cdecl internal_43d650()
{
    __asm
    {
        mov dword ptr ds : [public_6687f8], 0
        mov dword ptr ds : [public_6687fc], 0xBEB33333
        mov dword ptr ds : [public_668800], 0
        ret 
        UNREACHABLE_TRAP(0x43d650)
    }
}
