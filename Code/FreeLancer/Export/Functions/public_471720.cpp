#include "FreeLancer-PCH.h"

PROC_DECLARE(0x471720, internal_471720, public_471720);
extern "C" NAKED register_t __cdecl internal_471720()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0330]
        mov dword ptr ds : [public_66db38], eax
        ret 
        UNREACHABLE_TRAP(0x471720)
    }
}
