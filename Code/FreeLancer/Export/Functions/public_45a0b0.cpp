#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45a0b0, internal_45a0b0, public_45a0b0);
extern "C" NAKED register_t __cdecl internal_45a0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce7ec]
        mov dword ptr ds : [public_66d350], eax
        ret 
        UNREACHABLE_TRAP(0x45a0b0)
    }
}
