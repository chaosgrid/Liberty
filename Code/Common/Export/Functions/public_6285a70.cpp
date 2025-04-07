#include "Common-PCH.h"

PROC_DECLARE(0x6285a70, internal_6285a70, public_6285a70);
extern "C" NAKED register_t __cdecl internal_6285a70()
{
    __asm
    {
        mov eax, 0x1F4
        ret 
        UNREACHABLE_TRAP(0x6285a70)
    }
}
