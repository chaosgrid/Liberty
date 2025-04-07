#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309b60);

PROC_DECLARE(0x6309b60, internal_6309b60, public_6309b60);
extern "C" NAKED register_t __cdecl internal_6309b60()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [public_63fcf0c]
        xor eax, eax
        cmp ecx, edx
        sete al
        ret 
        UNREACHABLE_TRAP(0x6309b60)
    }
}
