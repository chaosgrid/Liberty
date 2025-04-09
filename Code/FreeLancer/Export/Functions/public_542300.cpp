#include "FreeLancer-PCH.h"

PROC_DECLARE(0x542300, internal_542300, public_542300);
extern "C" NAKED register_t __cdecl internal_542300()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8bc]
        mov dword ptr ds : [public_678aec], eax
        ret 
        UNREACHABLE_TRAP(0x542300)
    }
}
