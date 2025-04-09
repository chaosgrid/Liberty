#include "Freelancer-PCH.h"

PROC_DECLARE(0x542520, internal_542520, public_542520);
extern "C" NAKED register_t __cdecl internal_542520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8c4]
        mov dword ptr ds : [public_678b00], eax
        ret 
        UNREACHABLE_TRAP(0x542520)
    }
}
