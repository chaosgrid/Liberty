#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ab40, internal_53ab40, public_53ab40);
extern "C" NAKED register_t __cdecl internal_53ab40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dec18]
        mov dword ptr ds : [public_6789f0], eax
        ret 
        UNREACHABLE_TRAP(0x53ab40)
    }
}
