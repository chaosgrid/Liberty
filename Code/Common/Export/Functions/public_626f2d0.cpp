#include "Common-PCH.h"

PROC_DECLARE(0x626f2d0, internal_626f2d0, public_626f2d0);
extern "C" NAKED register_t __cdecl internal_626f2d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x90]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x626f2d0)
    }
}
