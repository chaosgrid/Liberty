#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6221c60);
CLANG_FORWARD_PROC_SYMBOL(public_6222b60);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6221ccd _public_6221ccd
#define public_6221ce1 _public_6221ce1
#define public_6221ce7 _public_6221ce7
#define public_6221cf5 _public_6221cf5
#define public_6221d36 _public_6221d36
#define public_6221d4f _public_6221d4f
#define public_6221d62 _public_6221d62
#define public_6221d6d _public_6221d6d
#define public_6221d70 _public_6221d70
#define public_6221d75 _public_6221d75
#define public_6221d9e _public_6221d9e
#define public_6221db7 _public_6221db7
#define public_6221dca _public_6221dca
#define public_6221dd4 _public_6221dd4
#define public_6221df7 _public_6221df7
#define public_6221e0f _public_6221e0f
#define public_6221e22 _public_6221e22
#define public_6221e2f _public_6221e2f
#define public_6221e31 _public_6221e31
#define public_6221e37 _public_6221e37
#define public_6221e60 _public_6221e60
#define public_6221e73 _public_6221e73
#define public_6221e7e _public_6221e7e
#define public_6221e81 _public_6221e81
#define public_6221e83 _public_6221e83
#define public_6221e86 _public_6221e86
#define public_6221e92 _public_6221e92

PROC_DECLARE(0x6221c60, internal_6221c60, public_6221c60);
extern "C" NAKED register_t __cdecl internal_6221c60()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_624612c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_6222b60
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6221ccd
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_6221ccd
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jb public_6221ccd
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6221ce7
        mov dword ptr ds : [eax+8], ebx
        jmp public_6221ce7
        public_6221ccd : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6221ce1
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6221ce7
        public_6221ce1 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6221ce7
        mov dword ptr ds : [eax], ebx
        public_6221ce7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6221e92
        public_6221cf5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6221e92
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6221dd4
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6221d36
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6221e86
        public_6221d36 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6221d75
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6221d4f
        mov dword ptr ds : [edx+4], eax
        public_6221d4f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6221d62
        mov dword ptr ds : [edx+4], ecx
        jmp public_6221d70
        public_6221d62 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6221d6d
        mov dword ptr ds : [edx], ecx
        jmp public_6221d70
        public_6221d6d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6221d70 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6221d75 : nop
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
        je public_6221d9e
        mov dword ptr ds : [edi+4], ecx
        public_6221d9e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6221db7
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6221e83
        public_6221db7 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6221dca
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6221e83
        public_6221dca : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6221e83
        public_6221dd4 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6221df7
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6221e86
        public_6221df7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6221e37
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6221e0f
        mov dword ptr ds : [edx+4], eax
        public_6221e0f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6221e22
        mov dword ptr ds : [edx+4], ecx
        jmp public_6221e31
        public_6221e22 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6221e2f
        mov dword ptr ds : [edx+8], ecx
        jmp public_6221e31
        public_6221e2f : nop
        mov dword ptr ds : [edx], ecx
        public_6221e31 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6221e37 : nop
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
        je public_6221e60
        mov dword ptr ds : [edi+4], ecx
        public_6221e60 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6221e73
        mov dword ptr ds : [edi+4], edx
        jmp public_6221e81
        public_6221e73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6221e7e
        mov dword ptr ds : [edi], edx
        jmp public_6221e81
        public_6221e7e : nop
        mov dword ptr ds : [edi+8], edx
        public_6221e81 : nop
        mov dword ptr ds : [edx], ecx
        public_6221e83 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6221e86 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6221cf5
        public_6221e92 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6221c60)
    }
}

#undef public_6221ccd
#undef public_6221ce1
#undef public_6221ce7
#undef public_6221cf5
#undef public_6221d36
#undef public_6221d4f
#undef public_6221d62
#undef public_6221d6d
#undef public_6221d70
#undef public_6221d75
#undef public_6221d9e
#undef public_6221db7
#undef public_6221dca
#undef public_6221dd4
#undef public_6221df7
#undef public_6221e0f
#undef public_6221e22
#undef public_6221e2f
#undef public_6221e31
#undef public_6221e37
#undef public_6221e60
#undef public_6221e73
#undef public_6221e7e
#undef public_6221e81
#undef public_6221e83
#undef public_6221e86
#undef public_6221e92
