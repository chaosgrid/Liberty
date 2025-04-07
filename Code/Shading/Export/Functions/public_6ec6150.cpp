#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6150);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6680);
CLANG_FORWARD_PROC_SYMBOL(public_6ec6a10);

#define public_6ec61b9 _public_6ec61b9
#define public_6ec61cd _public_6ec61cd
#define public_6ec61d3 _public_6ec61d3
#define public_6ec61e1 _public_6ec61e1
#define public_6ec6222 _public_6ec6222
#define public_6ec623b _public_6ec623b
#define public_6ec624e _public_6ec624e
#define public_6ec6259 _public_6ec6259
#define public_6ec625c _public_6ec625c
#define public_6ec6261 _public_6ec6261
#define public_6ec628a _public_6ec628a
#define public_6ec62a3 _public_6ec62a3
#define public_6ec62b6 _public_6ec62b6
#define public_6ec62c0 _public_6ec62c0
#define public_6ec62e3 _public_6ec62e3
#define public_6ec62fb _public_6ec62fb
#define public_6ec630e _public_6ec630e
#define public_6ec631b _public_6ec631b
#define public_6ec631d _public_6ec631d
#define public_6ec6323 _public_6ec6323
#define public_6ec634c _public_6ec634c
#define public_6ec635f _public_6ec635f
#define public_6ec636a _public_6ec636a
#define public_6ec636d _public_6ec636d
#define public_6ec636f _public_6ec636f
#define public_6ec6372 _public_6ec6372
#define public_6ec637e _public_6ec637e

PROC_DECLARE(0x6ec6150, internal_6ec6150, public_6ec6150);
extern "C" NAKED register_t __cdecl internal_6ec6150()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6ec6680
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x48], 0
        mov byte ptr ds : [ebx+0x49], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0x10]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ec6a10
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ec61b9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ec61b9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0x10]
        jl public_6ec61b9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ec61d3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec61d3
        public_6ec61b9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec61cd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ec61d3
        public_6ec61cd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ec61d3
        mov dword ptr ds : [eax], ebx
        public_6ec61d3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ec637e
        public_6ec61e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6ec637e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ec62c0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6ec6222
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ec6372
        public_6ec6222 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec6261
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec623b
        mov dword ptr ds : [edx+4], eax
        public_6ec623b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec624e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec625c
        public_6ec624e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ec6259
        mov dword ptr ds : [edx], ecx
        jmp public_6ec625c
        public_6ec6259 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec625c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec6261 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec628a
        mov dword ptr ds : [edi+4], ecx
        public_6ec628a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec62a3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec636f
        public_6ec62a3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec62b6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec636f
        public_6ec62b6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec636f
        public_6ec62c0 : nop
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6ec62e3
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ec6372
        public_6ec62e3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec6323
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec62fb
        mov dword ptr ds : [edx+4], eax
        public_6ec62fb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec630e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec631d
        public_6ec630e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ec631b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec631d
        public_6ec631b : nop
        mov dword ptr ds : [edx], ecx
        public_6ec631d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec6323 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6ec634c
        mov dword ptr ds : [edi+4], ecx
        public_6ec634c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec635f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ec636d
        public_6ec635f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ec636a
        mov dword ptr ds : [edi], edx
        jmp public_6ec636d
        public_6ec636a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec636d : nop
        mov dword ptr ds : [edx], ecx
        public_6ec636f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec6372 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec61e1
        public_6ec637e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6ec6150)
    }
}

#undef public_6ec61b9
#undef public_6ec61cd
#undef public_6ec61d3
#undef public_6ec61e1
#undef public_6ec6222
#undef public_6ec623b
#undef public_6ec624e
#undef public_6ec6259
#undef public_6ec625c
#undef public_6ec6261
#undef public_6ec628a
#undef public_6ec62a3
#undef public_6ec62b6
#undef public_6ec62c0
#undef public_6ec62e3
#undef public_6ec62fb
#undef public_6ec630e
#undef public_6ec631b
#undef public_6ec631d
#undef public_6ec6323
#undef public_6ec634c
#undef public_6ec635f
#undef public_6ec636a
#undef public_6ec636d
#undef public_6ec636f
#undef public_6ec6372
#undef public_6ec637e
