#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45fc80, internal_45fc80, public_45fc80);
extern "C" NAKED register_t __cdecl internal_45fc80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d4d4]
        mov dword ptr ds : [public_66d4d0], eax
        ret 
        UNREACHABLE_TRAP(0x45fc80)
    }
}
