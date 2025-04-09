#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f5360, internal_4f5360, public_4f5360);
extern "C" NAKED register_t __cdecl internal_4f5360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9898]
        mov dword ptr ds : [public_674c3c], eax
        ret 
        UNREACHABLE_TRAP(0x4f5360)
    }
}
