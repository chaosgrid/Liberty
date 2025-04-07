#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32f60);
CLANG_FORWARD_PROC_SYMBOL(public_6f33230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f32fc9 _public_6f32fc9
#define public_6f32fdd _public_6f32fdd
#define public_6f32fe3 _public_6f32fe3
#define public_6f32ff1 _public_6f32ff1
#define public_6f33032 _public_6f33032
#define public_6f3304b _public_6f3304b
#define public_6f3305e _public_6f3305e
#define public_6f33069 _public_6f33069
#define public_6f3306c _public_6f3306c
#define public_6f33071 _public_6f33071
#define public_6f3309a _public_6f3309a
#define public_6f330b3 _public_6f330b3
#define public_6f330c6 _public_6f330c6
#define public_6f330d0 _public_6f330d0
#define public_6f330f3 _public_6f330f3
#define public_6f3310b _public_6f3310b
#define public_6f3311e _public_6f3311e
#define public_6f3312b _public_6f3312b
#define public_6f3312d _public_6f3312d
#define public_6f33133 _public_6f33133
#define public_6f3315c _public_6f3315c
#define public_6f3316f _public_6f3316f
#define public_6f3317a _public_6f3317a
#define public_6f3317d _public_6f3317d
#define public_6f3317f _public_6f3317f
#define public_6f33182 _public_6f33182
#define public_6f3318e _public_6f3318e

PROC_DECLARE(0x6f32f60, internal_6f32f60, public_6f32f60);
extern "C" NAKED register_t __cdecl internal_6f32f60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x3C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x38], 0
        mov byte ptr ds : [ebx+0x39], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f33230
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f32fc9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f32fc9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f32fc9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f32fe3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f32fe3
        public_6f32fc9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f32fdd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f32fe3
        public_6f32fdd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f32fe3
        mov dword ptr ds : [eax], ebx
        public_6f32fe3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3318e
        public_6f32ff1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_6f3318e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f330d0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x38], 0
        jne public_6f33032
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f33182
        public_6f33032 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f33071
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3304b
        mov dword ptr ds : [edx+4], eax
        public_6f3304b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3305e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3306c
        public_6f3305e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f33069
        mov dword ptr ds : [edx], ecx
        jmp public_6f3306c
        public_6f33069 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3306c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f33071 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3309a
        mov dword ptr ds : [edi+4], ecx
        public_6f3309a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f330b3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3317f
        public_6f330b3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f330c6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3317f
        public_6f330c6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3317f
        public_6f330d0 : nop
        cmp byte ptr ds : [edx+0x38], 0
        jne public_6f330f3
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x38], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f33182
        public_6f330f3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f33133
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3310b
        mov dword ptr ds : [edx+4], eax
        public_6f3310b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3311e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3312d
        public_6f3311e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f3312b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3312d
        public_6f3312b : nop
        mov dword ptr ds : [edx], ecx
        public_6f3312d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f33133 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f3315c
        mov dword ptr ds : [edi+4], ecx
        public_6f3315c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3316f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3317d
        public_6f3316f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3317a
        mov dword ptr ds : [edi], edx
        jmp public_6f3317d
        public_6f3317a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3317d : nop
        mov dword ptr ds : [edx], ecx
        public_6f3317f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f33182 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f32ff1
        public_6f3318e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x38], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f32f60)
    }
}

#undef public_6f32fc9
#undef public_6f32fdd
#undef public_6f32fe3
#undef public_6f32ff1
#undef public_6f33032
#undef public_6f3304b
#undef public_6f3305e
#undef public_6f33069
#undef public_6f3306c
#undef public_6f33071
#undef public_6f3309a
#undef public_6f330b3
#undef public_6f330c6
#undef public_6f330d0
#undef public_6f330f3
#undef public_6f3310b
#undef public_6f3311e
#undef public_6f3312b
#undef public_6f3312d
#undef public_6f33133
#undef public_6f3315c
#undef public_6f3316f
#undef public_6f3317a
#undef public_6f3317d
#undef public_6f3317f
#undef public_6f33182
#undef public_6f3318e
