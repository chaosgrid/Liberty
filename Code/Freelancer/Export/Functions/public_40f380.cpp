#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f380, internal_40f380, public_40f380);
extern "C" NAKED register_t __cdecl internal_40f380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 4
        ret 4
        UNREACHABLE_TRAP(0x40f380)
    }
}
