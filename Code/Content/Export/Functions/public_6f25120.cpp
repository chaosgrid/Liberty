#include "Content-PCH.h"

PROC_DECLARE(0x6f25120, internal_6f25120, public_6f25120);
extern "C" NAKED register_t __cdecl internal_6f25120()
{
    __asm
    {
        mov eax, 0x11
        ret 
        UNREACHABLE_TRAP(0x6f25120)
    }
}
