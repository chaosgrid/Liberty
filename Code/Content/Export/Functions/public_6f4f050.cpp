#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f050);

PROC_DECLARE(0x6f4f050, internal_6f4f050, public_6f4f050);
extern "C" NAKED register_t __cdecl internal_6f4f050()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f4f050)
    }
}
