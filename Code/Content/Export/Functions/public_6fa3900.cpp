#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4870);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6fa3972 _public_6fa3972
#define public_6fa3986 _public_6fa3986
#define public_6fa398c _public_6fa398c
#define public_6fa39a0 _public_6fa39a0
#define public_6fa39f0 _public_6fa39f0
#define public_6fa3a09 _public_6fa3a09
#define public_6fa3a1c _public_6fa3a1c
#define public_6fa3a27 _public_6fa3a27
#define public_6fa3a2a _public_6fa3a2a
#define public_6fa3a2f _public_6fa3a2f
#define public_6fa3a5e _public_6fa3a5e
#define public_6fa3a77 _public_6fa3a77
#define public_6fa3a8a _public_6fa3a8a
#define public_6fa3a94 _public_6fa3a94
#define public_6fa3ac3 _public_6fa3ac3
#define public_6fa3adb _public_6fa3adb
#define public_6fa3aee _public_6fa3aee
#define public_6fa3afb _public_6fa3afb
#define public_6fa3afd _public_6fa3afd
#define public_6fa3b03 _public_6fa3b03
#define public_6fa3b32 _public_6fa3b32
#define public_6fa3b45 _public_6fa3b45
#define public_6fa3b50 _public_6fa3b50
#define public_6fa3b53 _public_6fa3b53
#define public_6fa3b55 _public_6fa3b55
#define public_6fa3b58 _public_6fa3b58
#define public_6fa3b64 _public_6fa3b64

PROC_DECLARE(0x6fa3900, internal_6fa3900, public_6fa3900);
extern "C" NAKED register_t __cdecl internal_6fa3900()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x128
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x124], 0
        mov byte ptr ds : [ebx+0x125], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6fa4870
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6fa3972
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6fa3972
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6fa3972
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6fa398c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa398c
        public_6fa3972 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6fa3986
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6fa398c
        public_6fa3986 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6fa398c
        mov dword ptr ds : [eax], ebx
        public_6fa398c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6fa3b64
        lea ebx, ds:[ebx]
        public_6fa39a0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x124]
        test dl, dl
        jne public_6fa3b64
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6fa3a94
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x124], 0
        jne public_6fa39f0
        mov byte ptr ds : [ecx+0x124], 1
        mov byte ptr ds : [edx+0x124], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6fa3b58
        public_6fa39f0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6fa3a2f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa3a09
        mov dword ptr ds : [edx+4], eax
        public_6fa3a09 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa3a1c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa3a2a
        public_6fa3a1c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6fa3a27
        mov dword ptr ds : [edx], ecx
        jmp public_6fa3a2a
        public_6fa3a27 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6fa3a2a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa3a2f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x124], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa3a5e
        mov dword ptr ds : [edi+4], ecx
        public_6fa3a5e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa3a77
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa3b55
        public_6fa3a77 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6fa3a8a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa3b55
        public_6fa3a8a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa3b55
        public_6fa3a94 : nop
        cmp byte ptr ds : [edx+0x124], 0
        jne public_6fa3ac3
        mov byte ptr ds : [ecx+0x124], 1
        mov byte ptr ds : [edx+0x124], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x124], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6fa3b58
        public_6fa3ac3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6fa3b03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6fa3adb
        mov dword ptr ds : [edx+4], eax
        public_6fa3adb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6fa3aee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6fa3afd
        public_6fa3aee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6fa3afb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa3afd
        public_6fa3afb : nop
        mov dword ptr ds : [edx], ecx
        public_6fa3afd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6fa3b03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x124], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6fa3b32
        mov dword ptr ds : [edi+4], ecx
        public_6fa3b32 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6fa3b45
        mov dword ptr ds : [edi+4], edx
        jmp public_6fa3b53
        public_6fa3b45 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6fa3b50
        mov dword ptr ds : [edi], edx
        jmp public_6fa3b53
        public_6fa3b50 : nop
        mov dword ptr ds : [edi+8], edx
        public_6fa3b53 : nop
        mov dword ptr ds : [edx], ecx
        public_6fa3b55 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6fa3b58 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6fa39a0
        public_6fa3b64 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x124], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6fa3900)
    }
}

#undef public_6fa3972
#undef public_6fa3986
#undef public_6fa398c
#undef public_6fa39a0
#undef public_6fa39f0
#undef public_6fa3a09
#undef public_6fa3a1c
#undef public_6fa3a27
#undef public_6fa3a2a
#undef public_6fa3a2f
#undef public_6fa3a5e
#undef public_6fa3a77
#undef public_6fa3a8a
#undef public_6fa3a94
#undef public_6fa3ac3
#undef public_6fa3adb
#undef public_6fa3aee
#undef public_6fa3afb
#undef public_6fa3afd
#undef public_6fa3b03
#undef public_6fa3b32
#undef public_6fa3b45
#undef public_6fa3b50
#undef public_6fa3b53
#undef public_6fa3b55
#undef public_6fa3b58
#undef public_6fa3b64
