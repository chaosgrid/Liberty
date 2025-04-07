#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801bd0);
CLANG_FORWARD_PROC_SYMBOL(public_6802870);
CLANG_FORWARD_PROC_SYMBOL(public_6802b50);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805f10);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_6809efe _public_6809efe
#define public_6809fab _public_6809fab

PROC_DECLARE(0x6809ea0, internal_6809ea0, public_6809ea0);
extern "C" NAKED register_t __cdecl internal_6809ea0()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6809c70
        mov edi, eax
        push edi
        call public_6809be0
        call public_680bdaa
        push 2
        mov dword ptr ss : [esp+0x20], eax
        call public_6805f10
        push eax
        call public_6801bd0
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        push 3
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        call public_6802870
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, 1
        add esp, 0x14
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], esi
        jl public_6809fab
        public_6809efe : nop
        mov eax, dword ptr ds : [public_680e604]
        fild dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [public_680e604]
        add dword ptr ds : [eax], 0x10
        mov ecx, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax]
        fstp qword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_680e604]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push esi
        push edi
        mov dword ptr ds : [eax], edx
        call public_68055c0
        mov edx, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
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
        add eax, 0xFFFFFFF0
        add esp, 0x10
        cmp edx, 0xFFFFFFFA
        jne public_6809fab
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jle public_6809efe
        public_6809fab : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6809ea0)
    }
}

#undef public_6809efe
#undef public_6809fab
