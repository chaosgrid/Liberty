#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57710);

PROC_DECLARE(0x6f57710, internal_6f57710, public_6f57710);
extern "C" NAKED register_t __cdecl internal_6f57710()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x120]
        xor eax, eax
        test edx, edx
        setne al
        ret 
        UNREACHABLE_TRAP(0x6f57710)
    }
}
