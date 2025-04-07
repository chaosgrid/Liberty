#include "Freelancer-PCH.h"

PROC_DECLARE(0x51fdf0, internal_51fdf0, public_51fdf0);
extern "C" NAKED register_t __cdecl internal_51fdf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc36c]
        mov dword ptr ds : [public_6753d0], eax
        ret 
        UNREACHABLE_TRAP(0x51fdf0)
    }
}
