#include "Freelancer-PCH.h"

PROC_DECLARE(0x437450, internal_437450, public_437450);
extern "C" NAKED register_t __cdecl internal_437450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caed4]
        mov dword ptr ds : [public_6686e8], eax
        ret 
        UNREACHABLE_TRAP(0x437450)
    }
}
