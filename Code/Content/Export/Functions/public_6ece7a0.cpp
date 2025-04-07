#include "Content-PCH.h"

PROC_DECLARE(0x6ece7a0, internal_6ece7a0, public_6ece7a0);
extern "C" NAKED register_t __cdecl internal_6ece7a0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xC]
        mov byte ptr ds : [public_6fd1c78], al
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x6ece7a0)
    }
}
