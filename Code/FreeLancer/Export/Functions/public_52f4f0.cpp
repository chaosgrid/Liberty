#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f4f0, internal_52f4f0, public_52f4f0);
extern "C" NAKED register_t __cdecl internal_52f4f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddcac]
        mov dword ptr ds : [public_67549c], eax
        ret 
        UNREACHABLE_TRAP(0x52f4f0)
    }
}
