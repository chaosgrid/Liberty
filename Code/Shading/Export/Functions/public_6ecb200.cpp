#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb200);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb910);
CLANG_FORWARD_PROC_SYMBOL(public_6ecbbd0);

#define public_6ecb269 _public_6ecb269
#define public_6ecb27d _public_6ecb27d
#define public_6ecb283 _public_6ecb283
#define public_6ecb291 _public_6ecb291
#define public_6ecb2d2 _public_6ecb2d2
#define public_6ecb2eb _public_6ecb2eb
#define public_6ecb2fe _public_6ecb2fe
#define public_6ecb309 _public_6ecb309
#define public_6ecb30c _public_6ecb30c
#define public_6ecb311 _public_6ecb311
#define public_6ecb33a _public_6ecb33a
#define public_6ecb353 _public_6ecb353
#define public_6ecb366 _public_6ecb366
#define public_6ecb370 _public_6ecb370
#define public_6ecb393 _public_6ecb393
#define public_6ecb3ab _public_6ecb3ab
#define public_6ecb3be _public_6ecb3be
#define public_6ecb3cb _public_6ecb3cb
#define public_6ecb3cd _public_6ecb3cd
#define public_6ecb3d3 _public_6ecb3d3
#define public_6ecb3fc _public_6ecb3fc
#define public_6ecb40f _public_6ecb40f
#define public_6ecb41a _public_6ecb41a
#define public_6ecb41d _public_6ecb41d
#define public_6ecb41f _public_6ecb41f
#define public_6ecb422 _public_6ecb422
#define public_6ecb42e _public_6ecb42e

PROC_DECLARE(0x6ecb200, internal_6ecb200, public_6ecb200);
extern "C" NAKED register_t __cdecl internal_6ecb200()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6ecb910
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ecbbd0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ecb269
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ecb269
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ecb269
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ecb283
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ecb283
        public_6ecb269 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ecb27d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ecb283
        public_6ecb27d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ecb283
        mov dword ptr ds : [eax], ebx
        public_6ecb283 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ecb42e
        public_6ecb291 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6ecb42e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ecb370
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6ecb2d2
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ecb422
        public_6ecb2d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ecb311
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ecb2eb
        mov dword ptr ds : [edx+4], eax
        public_6ecb2eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecb2fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecb30c
        public_6ecb2fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ecb309
        mov dword ptr ds : [edx], ecx
        jmp public_6ecb30c
        public_6ecb309 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ecb30c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ecb311 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecb33a
        mov dword ptr ds : [edi+4], ecx
        public_6ecb33a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb353
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb41f
        public_6ecb353 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ecb366
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb41f
        public_6ecb366 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb41f
        public_6ecb370 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6ecb393
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ecb422
        public_6ecb393 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ecb3d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ecb3ab
        mov dword ptr ds : [edx+4], eax
        public_6ecb3ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ecb3be
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ecb3cd
        public_6ecb3be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ecb3cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ecb3cd
        public_6ecb3cb : nop
        mov dword ptr ds : [edx], ecx
        public_6ecb3cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ecb3d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ecb3fc
        mov dword ptr ds : [edi+4], ecx
        public_6ecb3fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ecb40f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ecb41d
        public_6ecb40f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ecb41a
        mov dword ptr ds : [edi], edx
        jmp public_6ecb41d
        public_6ecb41a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ecb41d : nop
        mov dword ptr ds : [edx], ecx
        public_6ecb41f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ecb422 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ecb291
        public_6ecb42e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ecb200)
    }
}

#undef public_6ecb269
#undef public_6ecb27d
#undef public_6ecb283
#undef public_6ecb291
#undef public_6ecb2d2
#undef public_6ecb2eb
#undef public_6ecb2fe
#undef public_6ecb309
#undef public_6ecb30c
#undef public_6ecb311
#undef public_6ecb33a
#undef public_6ecb353
#undef public_6ecb366
#undef public_6ecb370
#undef public_6ecb393
#undef public_6ecb3ab
#undef public_6ecb3be
#undef public_6ecb3cb
#undef public_6ecb3cd
#undef public_6ecb3d3
#undef public_6ecb3fc
#undef public_6ecb40f
#undef public_6ecb41a
#undef public_6ecb41d
#undef public_6ecb41f
#undef public_6ecb422
#undef public_6ecb42e
