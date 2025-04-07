#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68068a0);
CLANG_FORWARD_PROC_SYMBOL(public_6806f20);
CLANG_FORWARD_PROC_SYMBOL(public_6806fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6807150);

#define public_68071a3 _public_68071a3

PROC_DECLARE(0x6807150, internal_6807150, public_6807150);
extern "C" NAKED register_t __cdecl internal_6807150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push esi
        push eax
        call public_6806fb0
        mov ebx, dword ptr ss : [esp+0x14]
        mov esi, eax
        sub esi, 2
        add esp, 4
        test esi, esi
        jle public_68071a3
        mov ecx, dword ptr ss : [esp+0xC]
        push ebp
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov ebp, dword ptr ds : [edi]
        push esi
        push edi
        call public_68068a0
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ds : [edi+8]
        lea ecx, ds:[eax+ebx]
        sub edx, ebx
        push edx
        add eax, esi
        push ecx
        add eax, ebx
        push eax
        call dword ptr ds : [public_680c02c]
        mov eax, dword ptr ds : [edi+8]
        add esp, 0x14
        add eax, esi
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop ebp
        public_68071a3 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        push 0
        push edx
        push eax
        push ebx
        push ecx
        call public_6806f20
        add esp, 0x14
        mov eax, esi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807150)
    }
}

#undef public_68071a3
