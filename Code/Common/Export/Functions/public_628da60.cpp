#include "Common-PCH.h"

PROC_DECLARE(0x628da60, internal_628da60, public_628da60);
extern "C" NAKED register_t __cdecl internal_628da60()
{
    __asm
    {
        mov eax, 0x3FFFFFFF
        ret 
        UNREACHABLE_TRAP(0x628da60)
    }
}
