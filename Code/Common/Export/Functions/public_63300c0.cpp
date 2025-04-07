#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63300c0);

PROC_DECLARE(0x63300c0, internal_63300c0, public_63300c0);
extern "C" NAKED register_t __cdecl internal_63300c0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0x2F
        mov edi, edx
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63300c0)
    }
}
