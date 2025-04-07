#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66f8000, internal_66f8000, public_66f8000);
extern "C" NAKED register_t __cdecl internal_66f8000()
{
    __asm
    {
        mov eax, offset public_6701f94
        ret 
        UNREACHABLE_TRAP(0x66f8000)
    }
}
