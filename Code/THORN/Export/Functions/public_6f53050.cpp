#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f527a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52e20);
CLANG_FORWARD_PROC_SYMBOL(public_6f52eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53050);

#define public_6f530a3 _public_6f530a3

PROC_DECLARE(0x6f53050, internal_6f53050, public_6f53050);
extern "C" NAKED register_t __cdecl internal_6f53050()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        push eax
        call public_6f52eb0
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, eax
        sub esi, 2
        add esp, 4
        test esi, esi
        jle public_6f530a3
        mov ecx, dword ptr ss : [esp+0xC]
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [edi]
        push esi
        push edi
        call public_6f527a0
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ds:[eax+ebx]
        sub edx, ebx
        push edx
        add eax, esi
        push ecx
        add eax, ebx
        push eax
        call dword ptr ds : [public_6f5a078]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0x14
        add eax, esi
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ebp
        public_6f530a3 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        push edx
        push eax
        push ebx
        push ecx
        call public_6f52e20
        add esp, 0x14
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53050)
    }
}

#undef public_6f530a3
