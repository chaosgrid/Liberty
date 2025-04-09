#include "FreeLancer-PCH.h"

PROC_DECLARE(0x547430, internal_547430, public_547430);
extern "C" NAKED register_t __cdecl internal_547430()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0010]
        mov dword ptr ds : [public_678b6c], eax
        ret 
        UNREACHABLE_TRAP(0x547430)
    }
}
