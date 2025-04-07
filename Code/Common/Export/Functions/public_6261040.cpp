#include "Common-PCH.h"

PROC_DECLARE(0x6261040, internal_6261040, public_6261040);
extern "C" NAKED register_t __cdecl internal_6261040()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx]
        xor eax, eax
        test dl, dl
        setne al
        ret 
        UNREACHABLE_TRAP(0x6261040)
    }
}
