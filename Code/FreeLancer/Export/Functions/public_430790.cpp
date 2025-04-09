#include "FreeLancer-PCH.h"

PROC_DECLARE(0x430790, internal_430790, public_430790);
extern "C" NAKED register_t __cdecl internal_430790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cab40]
        mov dword ptr ds : [public_667e34], eax
        ret 
        UNREACHABLE_TRAP(0x430790)
    }
}
