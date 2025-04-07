#include "Movie-PCH.h"

PROC_DECLARE(0x6ac1490, internal_6ac1490, public_6ac1490);
extern "C" NAKED register_t __cdecl internal_6ac1490()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push 0
        push 0
        push 0x808
        push eax
        call dword ptr ds : [public_6ada188]
        ret 
        UNREACHABLE_TRAP(0x6ac1490)
    }
}
