#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_6805f10);
CLANG_FORWARD_PROC_SYMBOL(public_680a1f0);

#define public_680a12e _public_680a12e
#define public_680a1af _public_680a1af
#define public_680a1c1 _public_680a1c1
#define public_680a1e4 _public_680a1e4

PROC_DECLARE(0x680a0f0, internal_680a0f0, public_680a0f0);
extern "C" NAKED register_t __cdecl internal_680a0f0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6805f10
        push eax
        call public_6801bd0
        mov edi, dword ptr ds : [eax]
        mov ebx, dword ptr ds : [eax+4]
        mov ebp, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push 4
        mov dword ptr ss : [esp+0x28], eax
        call public_6802870
        mov ecx, dword ptr ds : [public_680e604]
        mov esi, dword ptr ds : [ecx+0x58]
        add esp, 0xC
        test esi, esi
        je public_680a1e4
        public_680a12e : nop
        cmp dword ptr ds : [esi+0x10], 0xFFFFFFFA
        je public_680a1af
        push esi
        call public_680a1f0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebp
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        push esi
        mov dword ptr ds : [eax], ecx
        call public_680a1f0
        mov edx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        push 1
        push 2
        mov dword ptr ds : [eax], ecx
        call public_6802b50
        mov ecx, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax-0x10]
        add esp, 0x10
        cmp edx, 0xFFFFFFFA
        jne public_680a1c1
        add eax, 0xFFFFFFE0
        mov dword ptr ds : [ecx], eax
        public_680a1af : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_680a12e
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        public_680a1c1 : nop
        add dword ptr ds : [ecx], 0xFFFFFFF0
        mov eax, dword ptr ds : [public_680e604]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[eax-0x10]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_680a1e4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x680a0f0)
    }
}

#undef public_680a12e
#undef public_680a1af
#undef public_680a1c1
#undef public_680a1e4
