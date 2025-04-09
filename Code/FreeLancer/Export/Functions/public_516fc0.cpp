#include "FreeLancer-PCH.h"

PROC_DECLARE(0x516fc0, internal_516fc0, public_516fc0);
extern "C" NAKED register_t __cdecl internal_516fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db928]
        mov dword ptr ds : [public_675218], eax
        ret 
        UNREACHABLE_TRAP(0x516fc0)
    }
}
