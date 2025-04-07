#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f350, internal_40f350, public_40f350);
extern "C" NAKED register_t __cdecl internal_40f350()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], 0
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x40f350)
    }
}
