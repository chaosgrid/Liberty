#include "Freelancer-PCH.h"

PROC_DECLARE(0x415070, internal_415070, public_415070);
extern "C" NAKED register_t __cdecl internal_415070()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x14]
        ret 
        UNREACHABLE_TRAP(0x415070)
    }
}
