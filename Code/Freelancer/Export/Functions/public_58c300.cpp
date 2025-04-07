#include "Freelancer-PCH.h"

PROC_DECLARE(0x58c300, internal_58c300, public_58c300);
extern "C" NAKED register_t __cdecl internal_58c300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50e4]
        mov dword ptr ds : [public_67d8d8], eax
        ret 
        UNREACHABLE_TRAP(0x58c300)
    }
}
