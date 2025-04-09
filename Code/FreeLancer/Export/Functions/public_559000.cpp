#include "Freelancer-PCH.h"

PROC_DECLARE(0x559000, internal_559000, public_559000);
extern "C" NAKED register_t __cdecl internal_559000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1488]
        mov dword ptr ds : [public_6799f8], eax
        ret 
        UNREACHABLE_TRAP(0x559000)
    }
}
