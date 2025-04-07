#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eca4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eca530);
CLANG_FORWARD_PROC_SYMBOL(public_6eca620);

PROC_DECLARE(0x6eca530, internal_6eca530, public_6eca530);
extern "C" NAKED register_t __cdecl internal_6eca530()
{
    __asm
    {
        push ebx
        push esi
        push edi
        push 0x70
        mov ebx, ecx
        call public_6eca620
        mov esi, eax
        xor eax, eax
        mov ecx, 0x1C
        mov edi, esi
        rep stosd
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push eax
        mov ecx, ebx
        call public_6eca4a0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eca530)
    }
}
