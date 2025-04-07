#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb210);
CLANG_FORWARD_PROC_SYMBOL(public_6301d60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6301dc9 _public_6301dc9
#define public_6301ddd _public_6301ddd
#define public_6301de3 _public_6301de3
#define public_6301df1 _public_6301df1
#define public_6301e32 _public_6301e32
#define public_6301e4b _public_6301e4b
#define public_6301e5e _public_6301e5e
#define public_6301e69 _public_6301e69
#define public_6301e6c _public_6301e6c
#define public_6301e71 _public_6301e71
#define public_6301e9a _public_6301e9a
#define public_6301eb3 _public_6301eb3
#define public_6301ec6 _public_6301ec6
#define public_6301ed0 _public_6301ed0
#define public_6301ef3 _public_6301ef3
#define public_6301f0b _public_6301f0b
#define public_6301f1e _public_6301f1e
#define public_6301f2b _public_6301f2b
#define public_6301f2d _public_6301f2d
#define public_6301f33 _public_6301f33
#define public_6301f5c _public_6301f5c
#define public_6301f6f _public_6301f6f
#define public_6301f7a _public_6301f7a
#define public_6301f7d _public_6301f7d
#define public_6301f7f _public_6301f7f
#define public_6301f82 _public_6301f82
#define public_6301f8e _public_6301f8e

PROC_DECLARE(0x6301d60, internal_6301d60, public_6301d60);
extern "C" NAKED register_t __cdecl internal_6301d60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x34
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x30], 0
        mov byte ptr ds : [ebx+0x31], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62bb210
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6301dc9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6301dc9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6301dc9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6301de3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6301de3
        public_6301dc9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6301ddd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6301de3
        public_6301ddd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6301de3
        mov dword ptr ds : [eax], ebx
        public_6301de3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6301f8e
        public_6301df1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6301f8e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6301ed0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6301e32
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6301f82
        public_6301e32 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6301e71
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6301e4b
        mov dword ptr ds : [edx+4], eax
        public_6301e4b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6301e5e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6301e6c
        public_6301e5e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6301e69
        mov dword ptr ds : [edx], ecx
        jmp public_6301e6c
        public_6301e69 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6301e6c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6301e71 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6301e9a
        mov dword ptr ds : [edi+4], ecx
        public_6301e9a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6301eb3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6301f7f
        public_6301eb3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6301ec6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6301f7f
        public_6301ec6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6301f7f
        public_6301ed0 : nop
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6301ef3
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6301f82
        public_6301ef3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6301f33
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6301f0b
        mov dword ptr ds : [edx+4], eax
        public_6301f0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6301f1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6301f2d
        public_6301f1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6301f2b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6301f2d
        public_6301f2b : nop
        mov dword ptr ds : [edx], ecx
        public_6301f2d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6301f33 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6301f5c
        mov dword ptr ds : [edi+4], ecx
        public_6301f5c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6301f6f
        mov dword ptr ds : [edi+4], edx
        jmp public_6301f7d
        public_6301f6f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6301f7a
        mov dword ptr ds : [edi], edx
        jmp public_6301f7d
        public_6301f7a : nop
        mov dword ptr ds : [edi+8], edx
        public_6301f7d : nop
        mov dword ptr ds : [edx], ecx
        public_6301f7f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6301f82 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6301df1
        public_6301f8e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6301d60)
    }
}

#undef public_6301dc9
#undef public_6301ddd
#undef public_6301de3
#undef public_6301df1
#undef public_6301e32
#undef public_6301e4b
#undef public_6301e5e
#undef public_6301e69
#undef public_6301e6c
#undef public_6301e71
#undef public_6301e9a
#undef public_6301eb3
#undef public_6301ec6
#undef public_6301ed0
#undef public_6301ef3
#undef public_6301f0b
#undef public_6301f1e
#undef public_6301f2b
#undef public_6301f2d
#undef public_6301f33
#undef public_6301f5c
#undef public_6301f6f
#undef public_6301f7a
#undef public_6301f7d
#undef public_6301f7f
#undef public_6301f82
#undef public_6301f8e
