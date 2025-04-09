#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f5370, internal_4f5370, public_4f5370);
extern "C" NAKED register_t __cdecl internal_4f5370()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d989c]
        mov dword ptr ds : [public_674c38], eax
        ret 
        UNREACHABLE_TRAP(0x4f5370)
    }
}
