#include "Freelancer-PCH.h"

PROC_DECLARE(0x52b000, internal_52b000, public_52b000);
extern "C" NAKED register_t __cdecl internal_52b000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd330]
        mov dword ptr ds : [public_675428], eax
        ret 
        UNREACHABLE_TRAP(0x52b000)
    }
}
