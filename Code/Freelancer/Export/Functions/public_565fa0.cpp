#include "Freelancer-PCH.h"

PROC_DECLARE(0x565fa0, internal_565fa0, public_565fa0);
extern "C" NAKED register_t __cdecl internal_565fa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+8]
        cmp dword ptr ds : [edx+0x10], ecx
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x565fa0)
    }
}
