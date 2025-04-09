#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b6290, internal_5b6290, public_5b6290);
extern "C" NAKED register_t __cdecl internal_5b6290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e7160]
        mov dword ptr ds : [public_67ed48], eax
        ret 
        UNREACHABLE_TRAP(0x5b6290)
    }
}
