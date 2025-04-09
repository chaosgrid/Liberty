#include "Freelancer-PCH.h"

PROC_DECLARE(0x51dd00, internal_51dd00, public_51dd00);
extern "C" NAKED register_t __cdecl internal_51dd00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc128]
        mov dword ptr ds : [public_6752b0], eax
        ret 
        UNREACHABLE_TRAP(0x51dd00)
    }
}
