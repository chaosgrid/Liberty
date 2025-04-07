#include "Freelancer-PCH.h"

PROC_DECLARE(0x537480, internal_537480, public_537480);
extern "C" NAKED register_t __cdecl internal_537480()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de690]
        mov dword ptr ds : [public_6789bc], eax
        ret 
        UNREACHABLE_TRAP(0x537480)
    }
}
