#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63505f0);

PROC_DECLARE(0x63505f0, internal_63505f0, public_63505f0);
extern "C" NAKED register_t __cdecl internal_63505f0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 0x15
        mov edi, edx
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x63505f0)
    }
}
