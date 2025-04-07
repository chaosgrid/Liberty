#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d7550, internal_4d7550, public_4d7550);
extern "C" NAKED register_t __cdecl internal_4d7550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8278]
        mov dword ptr ds : [public_674a4c], eax
        ret 
        UNREACHABLE_TRAP(0x4d7550)
    }
}
