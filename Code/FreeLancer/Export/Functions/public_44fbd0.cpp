#include "FreeLancer-PCH.h"

PROC_DECLARE(0x44fbd0, internal_44fbd0, public_44fbd0);
extern "C" NAKED register_t __cdecl internal_44fbd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc588]
        mov dword ptr ds : [public_668af4], eax
        ret 
        UNREACHABLE_TRAP(0x44fbd0)
    }
}
