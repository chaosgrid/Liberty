#include "FreeLancer-PCH.h"

PROC_DECLARE(0x54b510, internal_54b510, public_54b510);
extern "C" NAKED register_t __cdecl internal_54b510()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0540]
        mov dword ptr ds : [public_678b90], eax
        ret 
        UNREACHABLE_TRAP(0x54b510)
    }
}
