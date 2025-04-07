#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_636d9c0);

PROC_DECLARE(0x636d9c0, internal_636d9c0, public_636d9c0);
extern "C" NAKED register_t __cdecl internal_636d9c0()
{
    __asm
    {
        mov edx, ecx
        push edi
        xor eax, eax
        mov ecx, 8
        mov edi, edx
        rep stosd
        mov eax, edx
        pop edi
        ret 
        UNREACHABLE_TRAP(0x636d9c0)
    }
}
