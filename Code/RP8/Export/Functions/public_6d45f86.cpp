#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45f86);

PROC_DECLARE(0x6d45f86, internal_6d45f86, public_6d45f86);
extern "C" NAKED register_t __cdecl internal_6d45f86()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov edx, ecx
        push edi
        mov edi, dword ptr ss : [esp+8]
        shr ecx, 2
        xor eax, eax
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6d45f86)
    }
}
