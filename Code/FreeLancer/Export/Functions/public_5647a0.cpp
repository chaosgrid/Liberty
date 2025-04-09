#include "Freelancer-PCH.h"

PROC_DECLARE(0x5647a0, internal_5647a0, public_5647a0);
extern "C" NAKED register_t __cdecl internal_5647a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e2514]
        mov dword ptr ds : [public_67a57c], eax
        ret 
        UNREACHABLE_TRAP(0x5647a0)
    }
}
