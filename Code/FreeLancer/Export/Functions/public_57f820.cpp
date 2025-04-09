#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f820);
CLANG_FORWARD_PROC_SYMBOL(public_57fc90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57f88b _public_57f88b
#define public_57f89f _public_57f89f
#define public_57f8a5 _public_57f8a5
#define public_57f8b3 _public_57f8b3
#define public_57f8f4 _public_57f8f4
#define public_57f90d _public_57f90d
#define public_57f920 _public_57f920
#define public_57f92b _public_57f92b
#define public_57f92e _public_57f92e
#define public_57f933 _public_57f933
#define public_57f95c _public_57f95c
#define public_57f975 _public_57f975
#define public_57f988 _public_57f988
#define public_57f992 _public_57f992
#define public_57f9b5 _public_57f9b5
#define public_57f9cd _public_57f9cd
#define public_57f9e0 _public_57f9e0
#define public_57f9ed _public_57f9ed
#define public_57f9ef _public_57f9ef
#define public_57f9f5 _public_57f9f5
#define public_57fa1e _public_57fa1e
#define public_57fa31 _public_57fa31
#define public_57fa3c _public_57fa3c
#define public_57fa3f _public_57fa3f
#define public_57fa41 _public_57fa41
#define public_57fa44 _public_57fa44
#define public_57fa50 _public_57fa50

PROC_DECLARE(0x57f820, internal_57f820, public_57f820);
extern "C" NAKED register_t __cdecl internal_57f820()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x10
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xE], 0
        mov byte ptr ds : [ebx+0xF], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_57fc90
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_57f88b
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_57f88b
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_57f88b
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_57f8a5
        mov dword ptr ds : [eax+8], ebx
        jmp public_57f8a5
        public_57f88b : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_57f89f
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_57f8a5
        public_57f89f : nop
        cmp edi, dword ptr ds : [eax]
        jne public_57f8a5
        mov dword ptr ds : [eax], ebx
        public_57f8a5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_57fa50
        public_57f8b3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xE]
        test dl, dl
        jne public_57fa50
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_57f992
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xE], 0
        jne public_57f8f4
        mov byte ptr ds : [ecx+0xE], 1
        mov byte ptr ds : [edx+0xE], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_57fa44
        public_57f8f4 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_57f933
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_57f90d
        mov dword ptr ds : [edx+4], eax
        public_57f90d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_57f920
        mov dword ptr ds : [edx+4], ecx
        jmp public_57f92e
        public_57f920 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_57f92b
        mov dword ptr ds : [edx], ecx
        jmp public_57f92e
        public_57f92b : nop
        mov dword ptr ds : [edx+8], ecx
        public_57f92e : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_57f933 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_57f95c
        mov dword ptr ds : [edi+4], ecx
        public_57f95c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_57f975
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_57fa41
        public_57f975 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_57f988
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_57fa41
        public_57f988 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_57fa41
        public_57f992 : nop
        cmp byte ptr ds : [edx+0xE], 0
        jne public_57f9b5
        mov byte ptr ds : [ecx+0xE], 1
        mov byte ptr ds : [edx+0xE], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xE], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_57fa44
        public_57f9b5 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_57f9f5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_57f9cd
        mov dword ptr ds : [edx+4], eax
        public_57f9cd : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_57f9e0
        mov dword ptr ds : [edx+4], ecx
        jmp public_57f9ef
        public_57f9e0 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_57f9ed
        mov dword ptr ds : [edx+8], ecx
        jmp public_57f9ef
        public_57f9ed : nop
        mov dword ptr ds : [edx], ecx
        public_57f9ef : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_57f9f5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xE], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xE], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_57fa1e
        mov dword ptr ds : [edi+4], ecx
        public_57fa1e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_57fa31
        mov dword ptr ds : [edi+4], edx
        jmp public_57fa3f
        public_57fa31 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_57fa3c
        mov dword ptr ds : [edi], edx
        jmp public_57fa3f
        public_57fa3c : nop
        mov dword ptr ds : [edi+8], edx
        public_57fa3f : nop
        mov dword ptr ds : [edx], ecx
        public_57fa41 : nop
        mov dword ptr ds : [ecx+4], edx
        public_57fa44 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_57f8b3
        public_57fa50 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xE], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x57f820)
    }
}

#undef public_57f88b
#undef public_57f89f
#undef public_57f8a5
#undef public_57f8b3
#undef public_57f8f4
#undef public_57f90d
#undef public_57f920
#undef public_57f92b
#undef public_57f92e
#undef public_57f933
#undef public_57f95c
#undef public_57f975
#undef public_57f988
#undef public_57f992
#undef public_57f9b5
#undef public_57f9cd
#undef public_57f9e0
#undef public_57f9ed
#undef public_57f9ef
#undef public_57f9f5
#undef public_57fa1e
#undef public_57fa31
#undef public_57fa3c
#undef public_57fa3f
#undef public_57fa41
#undef public_57fa44
#undef public_57fa50
