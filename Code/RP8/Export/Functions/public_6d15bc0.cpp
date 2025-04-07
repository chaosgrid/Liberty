#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc90);

PROC_DECLARE(0x6d15bc0, internal_6d15bc0, public_6d15bc0);
extern "C" NAKED register_t __cdecl internal_6d15bc0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr ss : [ebp-4], ecx
        mov eax, dword ptr ss : [ebp+0x18]
        push eax
        mov ecx, dword ptr ss : [ebp+0x14]
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push edx
        mov eax, dword ptr ss : [ebp+0xC]
        push eax
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        mov ecx, dword ptr ss : [ebp-4]
        call public_6d5cc90
        mov eax, dword ptr ss : [ebp-4]
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d15bc0)
    }
}
