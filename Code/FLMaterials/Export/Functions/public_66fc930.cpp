#include "FLMaterials-PCH.h"

PROC_DECLARE(0x66fc930, internal_66fc930, public_66fc930);
extern "C" NAKED register_t __cdecl internal_66fc930()
{
    __asm
    {
        mov dword ptr ds : [public_67045dc], 0x3F800000
        mov dword ptr ds : [public_67045e0], 0x3F800000
        mov dword ptr ds : [public_67045e4], 0x3F800000
        ret 
        UNREACHABLE_TRAP(0x66fc930)
    }
}
