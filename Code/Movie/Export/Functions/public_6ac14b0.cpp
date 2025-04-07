#include "Movie-PCH.h"

PROC_DECLARE(0x6ac14b0, internal_6ac14b0, public_6ac14b0);
extern "C" NAKED register_t __cdecl internal_6ac14b0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        push 0
        push 0
        push 0x804
        push eax
        call dword ptr ds : [public_6ada188]
        ret 
        UNREACHABLE_TRAP(0x6ac14b0)
    }
}
