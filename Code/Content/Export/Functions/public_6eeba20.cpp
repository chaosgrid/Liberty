#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeba20);

PROC_DECLARE(0x6eeba20, internal_6eeba20, public_6eeba20);
extern "C" NAKED register_t __cdecl internal_6eeba20()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fce368]
        xor eax, eax
        test cl, cl
        sete al
        ret 
        UNREACHABLE_TRAP(0x6eeba20)
    }
}
