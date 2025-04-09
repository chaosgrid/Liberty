#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f470, internal_40f470, public_40f470);
extern "C" NAKED register_t __cdecl internal_40f470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xAC
        ret 4
        UNREACHABLE_TRAP(0x40f470)
    }
}
