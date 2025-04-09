#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f370, internal_40f370, public_40f370);
extern "C" NAKED register_t __cdecl internal_40f370()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0x28
        ret 4
        UNREACHABLE_TRAP(0x40f370)
    }
}
