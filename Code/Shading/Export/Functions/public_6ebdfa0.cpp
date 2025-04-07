#include "Shading-PCH.h"

PROC_DECLARE(0x6ebdfa0, internal_6ebdfa0, public_6ebdfa0);
extern "C" NAKED register_t __cdecl internal_6ebdfa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [esp+8]
        neg cl
        sbb ecx, ecx
        and ecx, 2
        or ecx, 1
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ebdfa0)
    }
}
