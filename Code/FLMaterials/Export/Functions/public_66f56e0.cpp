#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f56e0, internal_66f56e0, public_66f56e0);
extern "C" NAKED register_t __cdecl internal_66f56e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov cl, byte ptr ds : [eax+0x64]
        mov edx, dword ptr ss : [esp+8]
        neg cl
        sbb ecx, ecx
        and ecx, 2
        or ecx, 8
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f56e0)
    }
}
