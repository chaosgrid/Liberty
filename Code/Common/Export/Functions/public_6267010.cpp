#include "Common-PCH.h"

PROC_DECLARE(0x6267010, internal_6267010, public_6267010);
extern "C" NAKED register_t __cdecl internal_6267010()
{
    __asm
    {
        mov eax, 0x7FFFFFFF
        ret 
        UNREACHABLE_TRAP(0x6267010)
    }
}
