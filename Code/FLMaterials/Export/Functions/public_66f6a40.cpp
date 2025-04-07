#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f6a40, internal_66f6a40, public_66f6a40);
extern "C" NAKED register_t __cdecl internal_66f6a40()
{
    __asm
    {
        mov dword ptr ds : [ecx+0x68], 0
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x66f6a40)
    }
}
