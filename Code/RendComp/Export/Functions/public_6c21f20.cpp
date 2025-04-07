#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21f20);
CLANG_FORWARD_PROC_SYMBOL(public_6c223f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c21f89 _public_6c21f89
#define public_6c21f9d _public_6c21f9d
#define public_6c21fa3 _public_6c21fa3
#define public_6c21fb1 _public_6c21fb1
#define public_6c21ff2 _public_6c21ff2
#define public_6c2200b _public_6c2200b
#define public_6c2201e _public_6c2201e
#define public_6c22029 _public_6c22029
#define public_6c2202c _public_6c2202c
#define public_6c22031 _public_6c22031
#define public_6c2205a _public_6c2205a
#define public_6c22073 _public_6c22073
#define public_6c22086 _public_6c22086
#define public_6c22090 _public_6c22090
#define public_6c220b3 _public_6c220b3
#define public_6c220cb _public_6c220cb
#define public_6c220de _public_6c220de
#define public_6c220eb _public_6c220eb
#define public_6c220ed _public_6c220ed
#define public_6c220f3 _public_6c220f3
#define public_6c2211c _public_6c2211c
#define public_6c2212f _public_6c2212f
#define public_6c2213a _public_6c2213a
#define public_6c2213d _public_6c2213d
#define public_6c2213f _public_6c2213f
#define public_6c22142 _public_6c22142
#define public_6c2214e _public_6c2214e

PROC_DECLARE(0x6c21f20, internal_6c21f20, public_6c21f20);
extern "C" NAKED register_t __cdecl internal_6c21f20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6c34eac
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6c223f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6c21f89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6c21f89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6c21f89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6c21fa3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c21fa3
        public_6c21f89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6c21f9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6c21fa3
        public_6c21f9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6c21fa3
        mov dword ptr ds : [eax], ebx
        public_6c21fa3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6c2214e
        public_6c21fb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2214e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6c22090
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c21ff2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6c22142
        public_6c21ff2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6c22031
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c2200b
        mov dword ptr ds : [edx+4], eax
        public_6c2200b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c2201e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c2202c
        public_6c2201e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6c22029
        mov dword ptr ds : [edx], ecx
        jmp public_6c2202c
        public_6c22029 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6c2202c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c22031 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c2205a
        mov dword ptr ds : [edi+4], ecx
        public_6c2205a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c22073
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2213f
        public_6c22073 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6c22086
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2213f
        public_6c22086 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2213f
        public_6c22090 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6c220b3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6c22142
        public_6c220b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6c220f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6c220cb
        mov dword ptr ds : [edx+4], eax
        public_6c220cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6c220de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6c220ed
        public_6c220de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6c220eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c220ed
        public_6c220eb : nop
        mov dword ptr ds : [edx], ecx
        public_6c220ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6c220f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6c2211c
        mov dword ptr ds : [edi+4], ecx
        public_6c2211c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6c2212f
        mov dword ptr ds : [edi+4], edx
        jmp public_6c2213d
        public_6c2212f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6c2213a
        mov dword ptr ds : [edi], edx
        jmp public_6c2213d
        public_6c2213a : nop
        mov dword ptr ds : [edi+8], edx
        public_6c2213d : nop
        mov dword ptr ds : [edx], ecx
        public_6c2213f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6c22142 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6c21fb1
        public_6c2214e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6c21f20)
    }
}

#undef public_6c21f89
#undef public_6c21f9d
#undef public_6c21fa3
#undef public_6c21fb1
#undef public_6c21ff2
#undef public_6c2200b
#undef public_6c2201e
#undef public_6c22029
#undef public_6c2202c
#undef public_6c22031
#undef public_6c2205a
#undef public_6c22073
#undef public_6c22086
#undef public_6c22090
#undef public_6c220b3
#undef public_6c220cb
#undef public_6c220de
#undef public_6c220eb
#undef public_6c220ed
#undef public_6c220f3
#undef public_6c2211c
#undef public_6c2212f
#undef public_6c2213a
#undef public_6c2213d
#undef public_6c2213f
#undef public_6c22142
#undef public_6c2214e
