#include "Common-PCH.h"

PROC_DECLARE(0x6287670, internal_6287670, public_6287670);
extern "C" NAKED register_t __cdecl internal_6287670()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x160]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6287670)
    }
}
