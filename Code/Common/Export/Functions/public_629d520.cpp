#include "Common-PCH.h"

PROC_DECLARE(0x629d520, internal_629d520, public_629d520);
extern "C" NAKED register_t __cdecl internal_629d520()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0xFD]
        ret 
        UNREACHABLE_TRAP(0x629d520)
    }
}
