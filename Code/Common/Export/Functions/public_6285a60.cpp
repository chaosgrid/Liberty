#include "Common-PCH.h"

PROC_DECLARE(0x6285a60, internal_6285a60, public_6285a60);
extern "C" NAKED register_t __cdecl internal_6285a60()
{
    __asm
    {
        mov eax, offset public_658a9e8
        ret 
        UNREACHABLE_TRAP(0x6285a60)
    }
}
