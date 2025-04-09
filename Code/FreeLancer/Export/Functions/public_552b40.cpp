#include "FreeLancer-PCH.h"

PROC_DECLARE(0x552b40, internal_552b40, public_552b40);
extern "C" NAKED register_t __cdecl internal_552b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0e14]
        mov dword ptr ds : [public_679948], eax
        ret 
        UNREACHABLE_TRAP(0x552b40)
    }
}
