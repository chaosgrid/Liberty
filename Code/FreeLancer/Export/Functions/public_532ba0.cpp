#include "Freelancer-PCH.h"

PROC_DECLARE(0x532ba0, internal_532ba0, public_532ba0);
extern "C" NAKED register_t __cdecl internal_532ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de198]
        mov dword ptr ds : [public_675538], eax
        ret 
        UNREACHABLE_TRAP(0x532ba0)
    }
}
