#include "FreeLancer-PCH.h"

PROC_DECLARE(0x595350, internal_595350, public_595350);
extern "C" NAKED register_t __cdecl internal_595350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e553c]
        mov dword ptr ds : [public_67d9f0], eax
        ret 
        UNREACHABLE_TRAP(0x595350)
    }
}
