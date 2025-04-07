#include "Freelancer-PCH.h"

PROC_DECLARE(0x51b2c0, internal_51b2c0, public_51b2c0);
extern "C" NAKED register_t __cdecl internal_51b2c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dbf54]
        mov dword ptr ds : [public_675234], eax
        ret 
        UNREACHABLE_TRAP(0x51b2c0)
    }
}
