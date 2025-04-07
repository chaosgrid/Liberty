#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5602e0);

PROC_DECLARE(0x5602e0, internal_5602e0, public_5602e0);
extern "C" NAKED register_t __cdecl internal_5602e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xB4]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x5602e0)
    }
}
