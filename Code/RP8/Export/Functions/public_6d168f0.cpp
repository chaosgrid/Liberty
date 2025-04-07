#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d168f0);

PROC_DECLARE(0x6d168f0, internal_6d168f0, public_6d168f0);
extern "C" NAKED register_t __cdecl internal_6d168f0()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, ss:[ebp+0x10]
        mov dword ptr ss : [ebp-4], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ss : [ebp-8]
        push eax
        push 0x2000
        mov ecx, dword ptr ss : [ebp+8]
        push ecx
        call dword ptr ds : [public_6d5e148]
        add esp, 0x10
        mov dword ptr ss : [ebp-4], 0
        mov eax, dword ptr ss : [ebp+8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d168f0)
    }
}
