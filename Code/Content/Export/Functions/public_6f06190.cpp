#include "Content-PCH.h"

PROC_DECLARE(0x6f06190, internal_6f06190, public_6f06190);
extern "C" NAKED register_t __cdecl internal_6f06190()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x10]
        ret 
        UNREACHABLE_TRAP(0x6f06190)
    }
}
