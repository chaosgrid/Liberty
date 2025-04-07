#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66ff7b0, internal_66ff7b0, public_66ff7b0);
extern "C" NAKED register_t __cdecl internal_66ff7b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x84]
        inc ecx
        mov dword ptr ds : [eax+0x84], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x66ff7b0)
    }
}
