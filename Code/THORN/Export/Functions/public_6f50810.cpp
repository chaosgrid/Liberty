#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f700);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f5086e _public_6f5086e
#define public_6f5091b _public_6f5091b

PROC_DECLARE(0x6f50810, internal_6f50810, public_6f50810);
extern "C" NAKED register_t __cdecl internal_6f50810()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f505e0
        mov edi, eax
        push edi
        call public_6f50550
        call public_6f57f16
        push 2
        mov dword ptr ss : [esp+0x20], eax
        call public_6f4f700
        push eax
        call public_6f4af60
        mov ebx, dword ptr ds : [eax]
        mov ebp, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [eax+0xC]
        push 3
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x38], edx
        call public_6f4c260
        mov eax, dword ptr ss : [esp+0x28]
        mov esi, 1
        add esp, 0x14
        cmp eax, esi
        mov dword ptr ss : [esp+0x10], esi
        jl public_6f5091b
        public_6f5086e : nop
        mov eax, dword ptr ds : [public_6f61e28]
        fild dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], ebx
        mov dword ptr ds : [ecx+4], ebp
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0x10
        mov ecx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [edx], 0xFFFFFFFF
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        fstp qword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push esi
        push edi
        mov dword ptr ds : [eax], edx
        call public_6f4e820
        mov edx, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax]
        add ecx, 0x10
        push 1
        push 2
        mov dword ptr ds : [eax], ecx
        call public_6f4c540
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax-0x10]
        add eax, 0xFFFFFFF0
        add esp, 0x10
        cmp edx, 0xFFFFFFFA
        jne public_6f5091b
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], esi
        jle public_6f5086e
        public_6f5091b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f50810)
    }
}

#undef public_6f5086e
#undef public_6f5091b
