#include "Freelancer-PCH.h"

PROC_DECLARE(0x52c820, internal_52c820, public_52c820);
extern "C" NAKED register_t __cdecl internal_52c820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dd428]
        mov dword ptr ds : [public_67544c], eax
        ret 
        UNREACHABLE_TRAP(0x52c820)
    }
}
