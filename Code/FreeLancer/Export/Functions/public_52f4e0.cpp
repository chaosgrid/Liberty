#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52f4e0, internal_52f4e0, public_52f4e0);
extern "C" NAKED register_t __cdecl internal_52f4e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ddca8]
        mov dword ptr ds : [public_6754a0], eax
        ret 
        UNREACHABLE_TRAP(0x52f4e0)
    }
}
