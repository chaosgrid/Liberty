#include "Freelancer-PCH.h"

PROC_DECLARE(0x55e8d0, internal_55e8d0, public_55e8d0);
extern "C" NAKED register_t __cdecl internal_55e8d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e190c]
        mov dword ptr ds : [public_679b48], eax
        ret 
        UNREACHABLE_TRAP(0x55e8d0)
    }
}
