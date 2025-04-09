#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ab30, internal_53ab30, public_53ab30);
extern "C" NAKED register_t __cdecl internal_53ab30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dec18]
        mov dword ptr ds : [public_6789f4], eax
        ret 
        UNREACHABLE_TRAP(0x53ab30)
    }
}
