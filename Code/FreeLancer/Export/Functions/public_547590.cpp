#include "Freelancer-PCH.h"

PROC_DECLARE(0x547590, internal_547590, public_547590);
extern "C" NAKED register_t __cdecl internal_547590()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0264]
        mov dword ptr ds : [public_678b80], eax
        ret 
        UNREACHABLE_TRAP(0x547590)
    }
}
