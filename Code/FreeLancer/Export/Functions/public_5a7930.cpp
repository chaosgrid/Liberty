#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a7930);
CLANG_FORWARD_PROC_SYMBOL(public_5a7de0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5a7999 _public_5a7999
#define public_5a79ad _public_5a79ad
#define public_5a79b3 _public_5a79b3
#define public_5a79c1 _public_5a79c1
#define public_5a7a02 _public_5a7a02
#define public_5a7a1b _public_5a7a1b
#define public_5a7a2e _public_5a7a2e
#define public_5a7a39 _public_5a7a39
#define public_5a7a3c _public_5a7a3c
#define public_5a7a41 _public_5a7a41
#define public_5a7a6a _public_5a7a6a
#define public_5a7a83 _public_5a7a83
#define public_5a7a96 _public_5a7a96
#define public_5a7aa0 _public_5a7aa0
#define public_5a7ac3 _public_5a7ac3
#define public_5a7adb _public_5a7adb
#define public_5a7aee _public_5a7aee
#define public_5a7afb _public_5a7afb
#define public_5a7afd _public_5a7afd
#define public_5a7b03 _public_5a7b03
#define public_5a7b2c _public_5a7b2c
#define public_5a7b3f _public_5a7b3f
#define public_5a7b4a _public_5a7b4a
#define public_5a7b4d _public_5a7b4d
#define public_5a7b4f _public_5a7b4f
#define public_5a7b52 _public_5a7b52
#define public_5a7b5e _public_5a7b5e

PROC_DECLARE(0x5a7930, internal_5a7930, public_5a7930);
extern "C" NAKED register_t __cdecl internal_5a7930()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_5a7de0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_5a7999
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_5a7999
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_5a7999
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_5a79b3
        mov dword ptr ds : [eax+8], ebx
        jmp public_5a79b3
        public_5a7999 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_5a79ad
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_5a79b3
        public_5a79ad : nop
        cmp edi, dword ptr ds : [eax]
        jne public_5a79b3
        mov dword ptr ds : [eax], ebx
        public_5a79b3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_5a7b5e
        public_5a79c1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_5a7b5e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_5a7aa0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_5a7a02
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_5a7b52
        public_5a7a02 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_5a7a41
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_5a7a1b
        mov dword ptr ds : [edx+4], eax
        public_5a7a1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5a7a2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_5a7a3c
        public_5a7a2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_5a7a39
        mov dword ptr ds : [edx], ecx
        jmp public_5a7a3c
        public_5a7a39 : nop
        mov dword ptr ds : [edx+8], ecx
        public_5a7a3c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_5a7a41 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_5a7a6a
        mov dword ptr ds : [edi+4], ecx
        public_5a7a6a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5a7a83
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a7b4f
        public_5a7a83 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_5a7a96
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a7b4f
        public_5a7a96 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a7b4f
        public_5a7aa0 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_5a7ac3
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5a7b52
        public_5a7ac3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_5a7b03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_5a7adb
        mov dword ptr ds : [edx+4], eax
        public_5a7adb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_5a7aee
        mov dword ptr ds : [edx+4], ecx
        jmp public_5a7afd
        public_5a7aee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_5a7afb
        mov dword ptr ds : [edx+8], ecx
        jmp public_5a7afd
        public_5a7afb : nop
        mov dword ptr ds : [edx], ecx
        public_5a7afd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_5a7b03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_5a7b2c
        mov dword ptr ds : [edi+4], ecx
        public_5a7b2c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_5a7b3f
        mov dword ptr ds : [edi+4], edx
        jmp public_5a7b4d
        public_5a7b3f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_5a7b4a
        mov dword ptr ds : [edi], edx
        jmp public_5a7b4d
        public_5a7b4a : nop
        mov dword ptr ds : [edi+8], edx
        public_5a7b4d : nop
        mov dword ptr ds : [edx], ecx
        public_5a7b4f : nop
        mov dword ptr ds : [ecx+4], edx
        public_5a7b52 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5a79c1
        public_5a7b5e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x5a7930)
    }
}

#undef public_5a7999
#undef public_5a79ad
#undef public_5a79b3
#undef public_5a79c1
#undef public_5a7a02
#undef public_5a7a1b
#undef public_5a7a2e
#undef public_5a7a39
#undef public_5a7a3c
#undef public_5a7a41
#undef public_5a7a6a
#undef public_5a7a83
#undef public_5a7a96
#undef public_5a7aa0
#undef public_5a7ac3
#undef public_5a7adb
#undef public_5a7aee
#undef public_5a7afb
#undef public_5a7afd
#undef public_5a7b03
#undef public_5a7b2c
#undef public_5a7b3f
#undef public_5a7b4a
#undef public_5a7b4d
#undef public_5a7b4f
#undef public_5a7b52
#undef public_5a7b5e
