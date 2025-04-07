#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_6805f10);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);

#define public_680a00f _public_680a00f
#define public_680a0bc _public_680a0bc
#define public_680a0db _public_680a0db

PROC_DECLARE(0x6809fc0, internal_6809fc0, public_6809fc0);
extern "C" NAKED register_t __cdecl internal_6809fc0()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6809c70
        mov ebp, eax
        push 2
        mov dword ptr ss : [esp+0x20], ebp
        call public_6805f10
        push eax
        call public_6801bd0
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push 3
        mov dword ptr ss : [esp+0x38], eax
        call public_6802870
        mov ecx, dword ptr ss : [ebp+0xC]
        xor eax, eax
        add esp, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_680a0db
        mov dword ptr ss : [esp+0x10], eax
        public_680a00f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        add eax, ecx
        mov edx, dword ptr ds : [eax+0x10]
        cmp edx, 0xFFFFFFFA
        lea ecx, ds:[eax+0x10]
        je public_680a0bc
        mov edx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], edi
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], ebx
        mov dword ptr ds : [edx+0xC], ebp
        mov edx, dword ptr ds : [public_680e604]
        add dword ptr ds : [edx], 0x10
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ebp
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0x10
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push 1
        push 2
        mov dword ptr ds : [eax], edx
        call public_6802b50
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax-0x10]
        add eax, 0xFFFFFFF0
        add esp, 8
        cmp edx, 0xFFFFFFFA
        jne public_680a0db
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        public_680a0bc : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        add edx, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        jl public_680a00f
        public_680a0db : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6809fc0)
    }
}

#undef public_680a00f
#undef public_680a0bc
#undef public_680a0db
