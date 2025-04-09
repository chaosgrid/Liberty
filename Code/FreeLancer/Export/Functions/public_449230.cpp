#include "Freelancer-PCH.h"

PROC_DECLARE(0x449230, internal_449230, public_449230);
extern "C" NAKED register_t __cdecl internal_449230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbe88]
        mov dword ptr ds : [public_668abc], eax
        ret 
        UNREACHABLE_TRAP(0x449230)
    }
}
