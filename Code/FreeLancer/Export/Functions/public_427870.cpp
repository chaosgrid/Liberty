#include "FreeLancer-PCH.h"

PROC_DECLARE(0x427870, internal_427870, public_427870);
extern "C" NAKED register_t __cdecl internal_427870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9cd8]
        mov dword ptr ds : [public_667c94], eax
        ret 
        UNREACHABLE_TRAP(0x427870)
    }
}
