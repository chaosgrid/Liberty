#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f3ff0, internal_66f3ff0, public_66f3ff0);
extern "C" NAKED register_t __cdecl internal_66f3ff0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0x2A
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f3ff0)
    }
}
