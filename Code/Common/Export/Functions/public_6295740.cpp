#include "Common-PCH.h"

PROC_DECLARE(0x6295740, internal_6295740, public_6295740);
extern "C" NAKED register_t __cdecl internal_6295740()
{
    __asm
    {
        mov eax, 0x10000
        ret 
        UNREACHABLE_TRAP(0x6295740)
    }
}
