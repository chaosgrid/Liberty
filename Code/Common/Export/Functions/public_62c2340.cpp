#include "Common-PCH.h"

PROC_DECLARE(0x62c2340, internal_62c2340, public_62c2340);
extern "C" NAKED register_t __cdecl internal_62c2340()
{
    __asm
    {
        mov eax, offset public_639f3d4
        ret 
        UNREACHABLE_TRAP(0x62c2340)
    }
}
