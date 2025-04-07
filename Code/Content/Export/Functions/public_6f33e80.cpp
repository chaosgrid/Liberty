#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33e80);

PROC_DECLARE(0x6f33e80, internal_6f33e80, public_6f33e80);
extern "C" NAKED register_t __cdecl internal_6f33e80()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x170]
        mov edx, dword ptr ds : [public_6fd0e64]
        xor eax, eax
        cmp ecx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6f33e80)
    }
}
