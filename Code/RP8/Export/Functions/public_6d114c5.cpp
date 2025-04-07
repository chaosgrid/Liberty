#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f040);

PROC_DECLARE(0x6d114c5, internal_6d114c5, public_6d114c5);
extern "C" NAKED register_t __cdecl internal_6d114c5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0x1C]
        push eax
        mov ecx, dword ptr ss : [ebp+0x18]
        push ecx
        mov edx, dword ptr ss : [ebp+0x14]
        push edx
        mov eax, dword ptr ss : [ebp+0x10]
        push eax
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6d1f040
        add esp, 0x14
        xor eax, eax
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d114c5)
    }
}
