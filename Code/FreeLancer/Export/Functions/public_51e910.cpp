#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51e910, internal_51e910, public_51e910);
extern "C" NAKED register_t __cdecl internal_51e910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dc2bc]
        mov dword ptr ds : [public_6752cc], eax
        ret 
        UNREACHABLE_TRAP(0x51e910)
    }
}
