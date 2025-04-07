#include "Content-PCH.h"

PROC_DECLARE(0x6f33cf0, internal_6f33cf0, public_6f33cf0);
extern "C" NAKED register_t __cdecl internal_6f33cf0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x11C]
        ret 
        UNREACHABLE_TRAP(0x6f33cf0)
    }
}
