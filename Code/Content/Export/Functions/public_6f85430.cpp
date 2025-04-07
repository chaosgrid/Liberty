#include "Content-PCH.h"

PROC_DECLARE(0x6f85430, internal_6f85430, public_6f85430);
extern "C" NAKED register_t __cdecl internal_6f85430()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x1C]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f85430)
    }
}
