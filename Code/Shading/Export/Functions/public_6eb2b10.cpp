#include "Shading-PCH.h"

PROC_DECLARE(0x6eb2b10, internal_6eb2b10, public_6eb2b10);
extern "C" NAKED register_t __cdecl internal_6eb2b10()
{
    __asm
    {
        mov byte ptr ds : [ecx+0x74], 1
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb2b10)
    }
}
