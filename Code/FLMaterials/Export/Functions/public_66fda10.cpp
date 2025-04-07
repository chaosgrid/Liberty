#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fda10, internal_66fda10, public_66fda10);
extern "C" NAKED register_t __cdecl internal_66fda10()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x66fda10)
    }
}
