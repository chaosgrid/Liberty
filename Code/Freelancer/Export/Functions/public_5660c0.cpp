#include "Freelancer-PCH.h"

PROC_DECLARE(0x5660c0, internal_5660c0, public_5660c0);
extern "C" NAKED register_t __cdecl internal_5660c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x8C]
        mov edx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edx+0x8C], ecx
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x5660c0)
    }
}
