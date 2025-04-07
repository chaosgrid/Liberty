#include "Content-PCH.h"

PROC_DECLARE(0x6f07110, internal_6f07110, public_6f07110);
extern "C" NAKED register_t __cdecl internal_6f07110()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+8]
        xor eax, eax
        cmp edx, 4
        sete al
        lea eax, ds:[eax+eax+1]
        ret 
        UNREACHABLE_TRAP(0x6f07110)
    }
}
