#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f4000, internal_66f4000, public_66f4000);
extern "C" NAKED register_t __cdecl internal_66f4000()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x66f4000)
    }
}
