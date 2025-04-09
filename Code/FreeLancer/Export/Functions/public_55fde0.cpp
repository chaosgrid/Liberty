#include "Freelancer-PCH.h"

PROC_DECLARE(0x55fde0, internal_55fde0, public_55fde0);
extern "C" NAKED register_t __cdecl internal_55fde0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1a20]
        mov dword ptr ds : [public_679b68], eax
        ret 
        UNREACHABLE_TRAP(0x55fde0)
    }
}
