#include "FreeLancer-PCH.h"

PROC_DECLARE(0x565e90, internal_565e90, public_565e90);
extern "C" NAKED register_t __cdecl internal_565e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [edx+0x2C]
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x565e90)
    }
}
