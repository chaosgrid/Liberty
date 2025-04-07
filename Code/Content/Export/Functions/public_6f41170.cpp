#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41170);
CLANG_FORWARD_PROC_SYMBOL(public_6f468a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f411d9 _public_6f411d9
#define public_6f411ed _public_6f411ed
#define public_6f411f3 _public_6f411f3
#define public_6f41201 _public_6f41201
#define public_6f41242 _public_6f41242
#define public_6f4125b _public_6f4125b
#define public_6f4126e _public_6f4126e
#define public_6f41279 _public_6f41279
#define public_6f4127c _public_6f4127c
#define public_6f41281 _public_6f41281
#define public_6f412aa _public_6f412aa
#define public_6f412c3 _public_6f412c3
#define public_6f412d6 _public_6f412d6
#define public_6f412e0 _public_6f412e0
#define public_6f41303 _public_6f41303
#define public_6f4131b _public_6f4131b
#define public_6f4132e _public_6f4132e
#define public_6f4133b _public_6f4133b
#define public_6f4133d _public_6f4133d
#define public_6f41343 _public_6f41343
#define public_6f4136c _public_6f4136c
#define public_6f4137f _public_6f4137f
#define public_6f4138a _public_6f4138a
#define public_6f4138d _public_6f4138d
#define public_6f4138f _public_6f4138f
#define public_6f41392 _public_6f41392
#define public_6f4139e _public_6f4139e

PROC_DECLARE(0x6f41170, internal_6f41170, public_6f41170);
extern "C" NAKED register_t __cdecl internal_6f41170()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x4C], 0
        mov byte ptr ds : [ebx+0x4D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f468a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f411d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f411d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f411d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f411f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f411f3
        public_6f411d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f411ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f411f3
        public_6f411ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f411f3
        mov dword ptr ds : [eax], ebx
        public_6f411f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4139e
        public_6f41201 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x4C]
        test dl, dl
        jne public_6f4139e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f412e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x4C], 0
        jne public_6f41242
        mov byte ptr ds : [ecx+0x4C], 1
        mov byte ptr ds : [edx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f41392
        public_6f41242 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f41281
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4125b
        mov dword ptr ds : [edx+4], eax
        public_6f4125b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4126e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4127c
        public_6f4126e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f41279
        mov dword ptr ds : [edx], ecx
        jmp public_6f4127c
        public_6f41279 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4127c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f41281 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f412aa
        mov dword ptr ds : [edi+4], ecx
        public_6f412aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f412c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4138f
        public_6f412c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f412d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4138f
        public_6f412d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4138f
        public_6f412e0 : nop
        cmp byte ptr ds : [edx+0x4C], 0
        jne public_6f41303
        mov byte ptr ds : [ecx+0x4C], 1
        mov byte ptr ds : [edx+0x4C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x4C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f41392
        public_6f41303 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f41343
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4131b
        mov dword ptr ds : [edx+4], eax
        public_6f4131b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4132e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4133d
        public_6f4132e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4133b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4133d
        public_6f4133b : nop
        mov dword ptr ds : [edx], ecx
        public_6f4133d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f41343 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x4C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x4C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4136c
        mov dword ptr ds : [edi+4], ecx
        public_6f4136c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4137f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f4138d
        public_6f4137f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f4138a
        mov dword ptr ds : [edi], edx
        jmp public_6f4138d
        public_6f4138a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f4138d : nop
        mov dword ptr ds : [edx], ecx
        public_6f4138f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f41392 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f41201
        public_6f4139e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x4C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f41170)
    }
}

#undef public_6f411d9
#undef public_6f411ed
#undef public_6f411f3
#undef public_6f41201
#undef public_6f41242
#undef public_6f4125b
#undef public_6f4126e
#undef public_6f41279
#undef public_6f4127c
#undef public_6f41281
#undef public_6f412aa
#undef public_6f412c3
#undef public_6f412d6
#undef public_6f412e0
#undef public_6f41303
#undef public_6f4131b
#undef public_6f4132e
#undef public_6f4133b
#undef public_6f4133d
#undef public_6f41343
#undef public_6f4136c
#undef public_6f4137f
#undef public_6f4138a
#undef public_6f4138d
#undef public_6f4138f
#undef public_6f41392
#undef public_6f4139e
