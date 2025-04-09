#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ea10, internal_51ea10, public_51ea10);
extern "C" NAKED register_t __cdecl internal_51ea10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2c4]
        mov dword ptr ds : [public_6752dc], eax
        ret 
        UNREACHABLE_TRAP(0x51ea10)
    }
}
