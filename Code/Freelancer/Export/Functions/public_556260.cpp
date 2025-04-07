#include "Freelancer-PCH.h"

PROC_DECLARE(0x556260, internal_556260, public_556260);
extern "C" NAKED register_t __cdecl internal_556260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1290]
        mov dword ptr ds : [public_6799b4], eax
        ret 
        UNREACHABLE_TRAP(0x556260)
    }
}
