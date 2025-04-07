#include "Common-PCH.h"

PROC_DECLARE(0x6286e60, internal_6286e60, public_6286e60);
extern "C" NAKED register_t __cdecl internal_6286e60()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6286e60)
    }
}
