#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f63f0, internal_66f63f0, public_66f63f0);
extern "C" NAKED register_t __cdecl internal_66f63f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x66f63f0)
    }
}
