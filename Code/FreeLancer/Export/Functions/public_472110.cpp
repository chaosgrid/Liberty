#include "FreeLancer-PCH.h"

PROC_DECLARE(0x472110, internal_472110, public_472110);
extern "C" NAKED register_t __cdecl internal_472110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d04ec]
        mov dword ptr ds : [public_66dbf4], eax
        ret 
        UNREACHABLE_TRAP(0x472110)
    }
}
