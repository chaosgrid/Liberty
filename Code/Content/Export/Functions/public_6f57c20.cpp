#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57c20);

PROC_DECLARE(0x6f57c20, internal_6f57c20, public_6f57c20);
extern "C" NAKED register_t __cdecl internal_6f57c20()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x160]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f57c20)
    }
}
