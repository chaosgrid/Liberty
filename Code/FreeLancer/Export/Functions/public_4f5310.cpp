#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f5310, internal_4f5310, public_4f5310);
extern "C" NAKED register_t __cdecl internal_4f5310()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_674bcc], eax
        mov dword ptr ds : [public_674bd0], eax
        mov eax, dword ptr ds : [public_5d97f0]
        mov dword ptr ds : [public_674bd4], eax
        ret 
        UNREACHABLE_TRAP(0x4f5310)
    }
}
