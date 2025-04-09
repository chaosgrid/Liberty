#include "FreeLancer-PCH.h"

PROC_DECLARE(0x565db0, internal_565db0, public_565db0);
extern "C" NAKED register_t __cdecl internal_565db0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, dword ptr ds : [edx+0x10]
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x565db0)
    }
}
