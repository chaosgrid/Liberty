#include "Common-PCH.h"

PROC_DECLARE(0x6329740, internal_6329740, public_6329740);
extern "C" NAKED register_t __cdecl internal_6329740()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6329740)
    }
}
