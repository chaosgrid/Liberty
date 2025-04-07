#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a7c90);
CLANG_FORWARD_PROC_SYMBOL(public_62a80e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a7cf9 _public_62a7cf9
#define public_62a7d0d _public_62a7d0d
#define public_62a7d13 _public_62a7d13
#define public_62a7d21 _public_62a7d21
#define public_62a7d62 _public_62a7d62
#define public_62a7d7b _public_62a7d7b
#define public_62a7d8e _public_62a7d8e
#define public_62a7d99 _public_62a7d99
#define public_62a7d9c _public_62a7d9c
#define public_62a7da1 _public_62a7da1
#define public_62a7dca _public_62a7dca
#define public_62a7de3 _public_62a7de3
#define public_62a7df6 _public_62a7df6
#define public_62a7e00 _public_62a7e00
#define public_62a7e23 _public_62a7e23
#define public_62a7e3b _public_62a7e3b
#define public_62a7e4e _public_62a7e4e
#define public_62a7e5b _public_62a7e5b
#define public_62a7e5d _public_62a7e5d
#define public_62a7e63 _public_62a7e63
#define public_62a7e8c _public_62a7e8c
#define public_62a7e9f _public_62a7e9f
#define public_62a7eaa _public_62a7eaa
#define public_62a7ead _public_62a7ead
#define public_62a7eaf _public_62a7eaf
#define public_62a7eb2 _public_62a7eb2
#define public_62a7ebe _public_62a7ebe

PROC_DECLARE(0x62a7c90, internal_62a7c90, public_62a7c90);
extern "C" NAKED register_t __cdecl internal_62a7c90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x28], 0
        mov byte ptr ds : [ebx+0x29], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62a80e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62a7cf9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62a7cf9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_62a7cf9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62a7d13
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a7d13
        public_62a7cf9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62a7d0d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62a7d13
        public_62a7d0d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62a7d13
        mov dword ptr ds : [eax], ebx
        public_62a7d13 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_62a7ebe
        public_62a7d21 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_62a7ebe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62a7e00
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_62a7d62
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_62a7eb2
        public_62a7d62 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62a7da1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a7d7b
        mov dword ptr ds : [edx+4], eax
        public_62a7d7b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a7d8e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a7d9c
        public_62a7d8e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_62a7d99
        mov dword ptr ds : [edx], ecx
        jmp public_62a7d9c
        public_62a7d99 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a7d9c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a7da1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a7dca
        mov dword ptr ds : [edi+4], ecx
        public_62a7dca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a7de3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7eaf
        public_62a7de3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a7df6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7eaf
        public_62a7df6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7eaf
        public_62a7e00 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_62a7e23
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_62a7eb2
        public_62a7e23 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_62a7e63
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a7e3b
        mov dword ptr ds : [edx+4], eax
        public_62a7e3b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a7e4e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a7e5d
        public_62a7e4e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_62a7e5b
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7e5d
        public_62a7e5b : nop
        mov dword ptr ds : [edx], ecx
        public_62a7e5d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a7e63 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a7e8c
        mov dword ptr ds : [edi+4], ecx
        public_62a7e8c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a7e9f
        mov dword ptr ds : [edi+4], edx
        jmp public_62a7ead
        public_62a7e9f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_62a7eaa
        mov dword ptr ds : [edi], edx
        jmp public_62a7ead
        public_62a7eaa : nop
        mov dword ptr ds : [edi+8], edx
        public_62a7ead : nop
        mov dword ptr ds : [edx], ecx
        public_62a7eaf : nop
        mov dword ptr ds : [ecx+4], edx
        public_62a7eb2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62a7d21
        public_62a7ebe : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62a7c90)
    }
}

#undef public_62a7cf9
#undef public_62a7d0d
#undef public_62a7d13
#undef public_62a7d21
#undef public_62a7d62
#undef public_62a7d7b
#undef public_62a7d8e
#undef public_62a7d99
#undef public_62a7d9c
#undef public_62a7da1
#undef public_62a7dca
#undef public_62a7de3
#undef public_62a7df6
#undef public_62a7e00
#undef public_62a7e23
#undef public_62a7e3b
#undef public_62a7e4e
#undef public_62a7e5b
#undef public_62a7e5d
#undef public_62a7e63
#undef public_62a7e8c
#undef public_62a7e9f
#undef public_62a7eaa
#undef public_62a7ead
#undef public_62a7eaf
#undef public_62a7eb2
#undef public_62a7ebe
