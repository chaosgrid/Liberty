#include "Content-PCH.h"

PROC_DECLARE(0x6ed59f0, internal_6ed59f0, public_6ed59f0);
extern "C" NAKED register_t __cdecl internal_6ed59f0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x164]
        ret 
        UNREACHABLE_TRAP(0x6ed59f0)
    }
}
