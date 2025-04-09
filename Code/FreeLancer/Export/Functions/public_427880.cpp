#include "FreeLancer-PCH.h"

PROC_DECLARE(0x427880, internal_427880, public_427880);
extern "C" NAKED register_t __cdecl internal_427880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9cd8]
        mov dword ptr ds : [public_667c90], eax
        ret 
        UNREACHABLE_TRAP(0x427880)
    }
}
