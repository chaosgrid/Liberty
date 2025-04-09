#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51dcf0, internal_51dcf0, public_51dcf0);
extern "C" NAKED register_t __cdecl internal_51dcf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc128]
        mov dword ptr ds : [public_6752b4], eax
        ret 
        UNREACHABLE_TRAP(0x51dcf0)
    }
}
