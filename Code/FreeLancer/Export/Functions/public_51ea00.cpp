#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51ea00, internal_51ea00, public_51ea00);
extern "C" NAKED register_t __cdecl internal_51ea00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2c0]
        mov dword ptr ds : [public_6752e0], eax
        ret 
        UNREACHABLE_TRAP(0x51ea00)
    }
}
