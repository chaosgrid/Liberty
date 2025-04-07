#include "Common-PCH.h"

PROC_DECLARE(0x6262d80, internal_6262d80, public_6262d80);
extern "C" NAKED register_t __cdecl internal_6262d80()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x80]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6262d80)
    }
}
