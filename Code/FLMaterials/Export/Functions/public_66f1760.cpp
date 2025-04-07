#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f1760, internal_66f1760, public_66f1760);
extern "C" NAKED register_t __cdecl internal_66f1760()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f1760)
    }
}
