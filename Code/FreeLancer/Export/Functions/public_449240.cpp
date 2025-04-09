#include "FreeLancer-PCH.h"

PROC_DECLARE(0x449240, internal_449240, public_449240);
extern "C" NAKED register_t __cdecl internal_449240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbe88]
        mov dword ptr ds : [public_668ab8], eax
        ret 
        UNREACHABLE_TRAP(0x449240)
    }
}
