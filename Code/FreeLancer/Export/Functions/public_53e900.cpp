#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53e900, internal_53e900, public_53e900);
extern "C" NAKED register_t __cdecl internal_53e900()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df80c]
        mov dword ptr ds : [public_678a14], eax
        ret 
        UNREACHABLE_TRAP(0x53e900)
    }
}
