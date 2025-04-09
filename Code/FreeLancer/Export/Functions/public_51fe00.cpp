#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51fe00, internal_51fe00, public_51fe00);
extern "C" NAKED register_t __cdecl internal_51fe00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc370]
        mov dword ptr ds : [public_6753cc], eax
        ret 
        UNREACHABLE_TRAP(0x51fe00)
    }
}
