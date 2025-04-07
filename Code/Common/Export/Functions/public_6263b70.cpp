#include "Common-PCH.h"

PROC_DECLARE(0x6263b70, internal_6263b70, public_6263b70);
extern "C" NAKED register_t __cdecl internal_6263b70()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+2]
        ret 
        UNREACHABLE_TRAP(0x6263b70)
    }
}
