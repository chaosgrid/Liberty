#include "FreeLancer-PCH.h"

PROC_DECLARE(0x450350, internal_450350, public_450350);
extern "C" NAKED register_t __cdecl internal_450350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cca70]
        mov dword ptr ds : [public_66d108], eax
        ret 
        UNREACHABLE_TRAP(0x450350)
    }
}
