#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f8930, internal_66f8930, public_66f8930);
extern "C" NAKED register_t __cdecl internal_66f8930()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 0xA2
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x66f8930)
    }
}
