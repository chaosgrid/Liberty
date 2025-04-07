#include "Server-PCH.h"

PROC_DECLARE(0x6cee6d0, internal_6cee6d0, public_6cee6d0);
extern "C" NAKED register_t __cdecl internal_6cee6d0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x40]
        ret 
        UNREACHABLE_TRAP(0x6cee6d0)
    }
}
