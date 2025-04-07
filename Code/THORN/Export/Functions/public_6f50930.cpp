#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c260);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f700);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);

#define public_6f5097f _public_6f5097f
#define public_6f50a2c _public_6f50a2c
#define public_6f50a4b _public_6f50a4b

PROC_DECLARE(0x6f50930, internal_6f50930, public_6f50930);
extern "C" NAKED register_t __cdecl internal_6f50930()
{
    __asm
    {
        sub esp, 0x1C
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f505e0
        mov ebp, eax
        push 2
        mov dword ptr ss : [esp+0x20], ebp
        call public_6f4f700
        push eax
        call public_6f4af60
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        push 3
        mov dword ptr ss : [esp+0x38], eax
        call public_6f4c260
        mov ecx, dword ptr ss : [ebp+0xC]
        xor eax, eax
        add esp, 0x10
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], eax
        jle public_6f50a4b
        mov dword ptr ss : [esp+0x10], eax
        public_6f5097f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+8]
        add eax, ecx
        mov edx, dword ptr ds : [eax+0x10]
        cmp edx, 0xFFFFFFFA
        lea ecx, ds:[eax+0x10]
        je public_6f50a2c
        mov edx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edx], esi
        mov dword ptr ds : [edx+4], edi
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], ebx
        mov dword ptr ds : [edx+0xC], ebp
        mov edx, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [edx], 0x10
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [edx], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ebp
        mov ebp, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], ebp
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, dword ptr ds : [public_6f61e28]
        add dword ptr ds : [eax], 0x10
        mov edx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, dword ptr ds : [public_6f61e28]
        mov edx, dword ptr ds : [eax]
        add edx, 0x10
        push 1
        push 2
        mov dword ptr ds : [eax], edx
        call public_6f4c540
        mov ecx, dword ptr ds : [public_6f61e28]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax-0x10]
        add eax, 0xFFFFFFF0
        add esp, 8
        cmp edx, 0xFFFFFFFA
        jne public_6f50a4b
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        public_6f50a2c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        add edx, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], edx
        jl public_6f5097f
        public_6f50a4b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6f50930)
    }
}

#undef public_6f5097f
#undef public_6f50a2c
#undef public_6f50a4b
