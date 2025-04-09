#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458d00);
CLANG_FORWARD_PROC_SYMBOL(public_458f50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_458d69 _public_458d69
#define public_458d7d _public_458d7d
#define public_458d83 _public_458d83
#define public_458d91 _public_458d91
#define public_458dd2 _public_458dd2
#define public_458deb _public_458deb
#define public_458dfe _public_458dfe
#define public_458e09 _public_458e09
#define public_458e0c _public_458e0c
#define public_458e11 _public_458e11
#define public_458e3a _public_458e3a
#define public_458e53 _public_458e53
#define public_458e66 _public_458e66
#define public_458e70 _public_458e70
#define public_458e93 _public_458e93
#define public_458eab _public_458eab
#define public_458ebe _public_458ebe
#define public_458ecb _public_458ecb
#define public_458ecd _public_458ecd
#define public_458ed3 _public_458ed3
#define public_458efc _public_458efc
#define public_458f0f _public_458f0f
#define public_458f1a _public_458f1a
#define public_458f1d _public_458f1d
#define public_458f1f _public_458f1f
#define public_458f22 _public_458f22
#define public_458f2e _public_458f2e

PROC_DECLARE(0x458d00, internal_458d00, public_458d00);
extern "C" NAKED register_t __cdecl internal_458d00()
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
        call public_458f50
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_458d69
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_458d69
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_458d69
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_458d83
        mov dword ptr ds : [eax+8], ebx
        jmp public_458d83
        public_458d69 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_458d7d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_458d83
        public_458d7d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_458d83
        mov dword ptr ds : [eax], ebx
        public_458d83 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_458f2e
        public_458d91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_458f2e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_458e70
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_458dd2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_458f22
        public_458dd2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_458e11
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_458deb
        mov dword ptr ds : [edx+4], eax
        public_458deb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_458dfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_458e0c
        public_458dfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_458e09
        mov dword ptr ds : [edx], ecx
        jmp public_458e0c
        public_458e09 : nop
        mov dword ptr ds : [edx+8], ecx
        public_458e0c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_458e11 : nop
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
        je public_458e3a
        mov dword ptr ds : [edi+4], ecx
        public_458e3a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_458e53
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_458f1f
        public_458e53 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_458e66
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_458f1f
        public_458e66 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_458f1f
        public_458e70 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_458e93
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_458f22
        public_458e93 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_458ed3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_458eab
        mov dword ptr ds : [edx+4], eax
        public_458eab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_458ebe
        mov dword ptr ds : [edx+4], ecx
        jmp public_458ecd
        public_458ebe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_458ecb
        mov dword ptr ds : [edx+8], ecx
        jmp public_458ecd
        public_458ecb : nop
        mov dword ptr ds : [edx], ecx
        public_458ecd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_458ed3 : nop
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
        je public_458efc
        mov dword ptr ds : [edi+4], ecx
        public_458efc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_458f0f
        mov dword ptr ds : [edi+4], edx
        jmp public_458f1d
        public_458f0f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_458f1a
        mov dword ptr ds : [edi], edx
        jmp public_458f1d
        public_458f1a : nop
        mov dword ptr ds : [edi+8], edx
        public_458f1d : nop
        mov dword ptr ds : [edx], ecx
        public_458f1f : nop
        mov dword ptr ds : [ecx+4], edx
        public_458f22 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_458d91
        public_458f2e : nop
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
        UNREACHABLE_TRAP(0x458d00)
    }
}

#undef public_458d69
#undef public_458d7d
#undef public_458d83
#undef public_458d91
#undef public_458dd2
#undef public_458deb
#undef public_458dfe
#undef public_458e09
#undef public_458e0c
#undef public_458e11
#undef public_458e3a
#undef public_458e53
#undef public_458e66
#undef public_458e70
#undef public_458e93
#undef public_458eab
#undef public_458ebe
#undef public_458ecb
#undef public_458ecd
#undef public_458ed3
#undef public_458efc
#undef public_458f0f
#undef public_458f1a
#undef public_458f1d
#undef public_458f1f
#undef public_458f22
#undef public_458f2e
