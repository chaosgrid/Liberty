#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333e50);

PROC_DECLARE(0x6333e50, internal_6333e50, public_6333e50);
extern "C" NAKED register_t __cdecl internal_6333e50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6333e50)
    }
}
