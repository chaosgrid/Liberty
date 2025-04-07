#include "Common-PCH.h"

PROC_DECLARE(0x6287680, internal_6287680, public_6287680);
extern "C" NAKED register_t __cdecl internal_6287680()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x164]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6287680)
    }
}
