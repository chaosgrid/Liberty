#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3ea30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fc80);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3ea99 _public_6f3ea99
#define public_6f3eaad _public_6f3eaad
#define public_6f3eab3 _public_6f3eab3
#define public_6f3eac1 _public_6f3eac1
#define public_6f3eb02 _public_6f3eb02
#define public_6f3eb1b _public_6f3eb1b
#define public_6f3eb2e _public_6f3eb2e
#define public_6f3eb39 _public_6f3eb39
#define public_6f3eb3c _public_6f3eb3c
#define public_6f3eb41 _public_6f3eb41
#define public_6f3eb6a _public_6f3eb6a
#define public_6f3eb83 _public_6f3eb83
#define public_6f3eb96 _public_6f3eb96
#define public_6f3eba0 _public_6f3eba0
#define public_6f3ebc3 _public_6f3ebc3
#define public_6f3ebdb _public_6f3ebdb
#define public_6f3ebee _public_6f3ebee
#define public_6f3ebfb _public_6f3ebfb
#define public_6f3ebfd _public_6f3ebfd
#define public_6f3ec03 _public_6f3ec03
#define public_6f3ec2c _public_6f3ec2c
#define public_6f3ec3f _public_6f3ec3f
#define public_6f3ec4a _public_6f3ec4a
#define public_6f3ec4d _public_6f3ec4d
#define public_6f3ec4f _public_6f3ec4f
#define public_6f3ec52 _public_6f3ec52
#define public_6f3ec5e _public_6f3ec5e

PROC_DECLARE(0x6f3ea30, internal_6f3ea30, public_6f3ea30);
extern "C" NAKED register_t __cdecl internal_6f3ea30()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_6f57e9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f3fc80
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f3ea99
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f3ea99
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f3ea99
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f3eab3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3eab3
        public_6f3ea99 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f3eaad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f3eab3
        public_6f3eaad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f3eab3
        mov dword ptr ds : [eax], ebx
        public_6f3eab3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3ec5e
        public_6f3eac1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6f3ec5e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f3eba0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6f3eb02
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f3ec52
        public_6f3eb02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3eb41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3eb1b
        mov dword ptr ds : [edx+4], eax
        public_6f3eb1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3eb2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3eb3c
        public_6f3eb2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f3eb39
        mov dword ptr ds : [edx], ecx
        jmp public_6f3eb3c
        public_6f3eb39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3eb3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3eb41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3eb6a
        mov dword ptr ds : [edi+4], ecx
        public_6f3eb6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3eb83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ec4f
        public_6f3eb83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3eb96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ec4f
        public_6f3eb96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ec4f
        public_6f3eba0 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6f3ebc3
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f3ec52
        public_6f3ebc3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f3ec03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3ebdb
        mov dword ptr ds : [edx+4], eax
        public_6f3ebdb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3ebee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3ebfd
        public_6f3ebee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f3ebfb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3ebfd
        public_6f3ebfb : nop
        mov dword ptr ds : [edx], ecx
        public_6f3ebfd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3ec03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3ec2c
        mov dword ptr ds : [edi+4], ecx
        public_6f3ec2c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3ec3f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3ec4d
        public_6f3ec3f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3ec4a
        mov dword ptr ds : [edi], edx
        jmp public_6f3ec4d
        public_6f3ec4a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3ec4d : nop
        mov dword ptr ds : [edx], ecx
        public_6f3ec4f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3ec52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3eac1
        public_6f3ec5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f3ea30)
    }
}

#undef public_6f3ea99
#undef public_6f3eaad
#undef public_6f3eab3
#undef public_6f3eac1
#undef public_6f3eb02
#undef public_6f3eb1b
#undef public_6f3eb2e
#undef public_6f3eb39
#undef public_6f3eb3c
#undef public_6f3eb41
#undef public_6f3eb6a
#undef public_6f3eb83
#undef public_6f3eb96
#undef public_6f3eba0
#undef public_6f3ebc3
#undef public_6f3ebdb
#undef public_6f3ebee
#undef public_6f3ebfb
#undef public_6f3ebfd
#undef public_6f3ec03
#undef public_6f3ec2c
#undef public_6f3ec3f
#undef public_6f3ec4a
#undef public_6f3ec4d
#undef public_6f3ec4f
#undef public_6f3ec52
#undef public_6f3ec5e
