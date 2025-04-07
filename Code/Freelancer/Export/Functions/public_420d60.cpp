#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);

PROC_DECLARE(0x420d60, internal_420d60, public_420d60);
extern "C" NAKED register_t __cdecl internal_420d60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        xor eax, eax
        cmp edx, 0xFFFFFFFF
        setne al
        ret 
        UNREACHABLE_TRAP(0x420d60)
    }
}
