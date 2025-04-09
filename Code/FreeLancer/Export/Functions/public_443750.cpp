#include "FreeLancer-PCH.h"

PROC_DECLARE(0x443750, internal_443750, public_443750);
extern "C" NAKED register_t __cdecl internal_443750()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cb8c4]
        mov dword ptr ds : [public_668838], eax
        ret 
        UNREACHABLE_TRAP(0x443750)
    }
}
