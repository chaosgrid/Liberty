#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5a1ad0, internal_5a1ad0, public_5a1ad0);
extern "C" NAKED register_t __cdecl internal_5a1ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5f8c]
        mov dword ptr ds : [public_67dd5c], eax
        ret 
        UNREACHABLE_TRAP(0x5a1ad0)
    }
}
