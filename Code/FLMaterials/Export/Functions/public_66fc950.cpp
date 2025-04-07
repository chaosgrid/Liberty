#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fc950, internal_66fc950, public_66fc950);
extern "C" NAKED register_t __cdecl internal_66fc950()
{
    __asm
    {
        mov dword ptr ds : [public_67045e8], 0
        mov dword ptr ds : [public_67045ec], 0xBF800000
        mov dword ptr ds : [public_67045f0], 0
        ret 
        UNREACHABLE_TRAP(0x66fc950)
    }
}
