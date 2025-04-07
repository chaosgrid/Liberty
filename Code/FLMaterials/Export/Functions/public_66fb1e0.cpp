#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fb1e0, internal_66fb1e0, public_66fb1e0);
extern "C" NAKED register_t __cdecl internal_66fb1e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0xA0
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66fb1e0)
    }
}
