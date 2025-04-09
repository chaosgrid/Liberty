#include "Freelancer-PCH.h"

PROC_DECLARE(0x40f5d0, internal_40f5d0, public_40f5d0);
extern "C" NAKED register_t __cdecl internal_40f5d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 4
        UNREACHABLE_TRAP(0x40f5d0)
    }
}
