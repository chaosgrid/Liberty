#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a79a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62a7a09 _public_62a7a09
#define public_62a7a1d _public_62a7a1d
#define public_62a7a23 _public_62a7a23
#define public_62a7a31 _public_62a7a31
#define public_62a7a72 _public_62a7a72
#define public_62a7a8b _public_62a7a8b
#define public_62a7a9e _public_62a7a9e
#define public_62a7aa9 _public_62a7aa9
#define public_62a7aac _public_62a7aac
#define public_62a7ab1 _public_62a7ab1
#define public_62a7ada _public_62a7ada
#define public_62a7af3 _public_62a7af3
#define public_62a7b06 _public_62a7b06
#define public_62a7b10 _public_62a7b10
#define public_62a7b33 _public_62a7b33
#define public_62a7b4b _public_62a7b4b
#define public_62a7b5e _public_62a7b5e
#define public_62a7b6b _public_62a7b6b
#define public_62a7b6d _public_62a7b6d
#define public_62a7b73 _public_62a7b73
#define public_62a7b9c _public_62a7b9c
#define public_62a7baf _public_62a7baf
#define public_62a7bba _public_62a7bba
#define public_62a7bbd _public_62a7bbd
#define public_62a7bbf _public_62a7bbf
#define public_62a7bc2 _public_62a7bc2
#define public_62a7bce _public_62a7bce

PROC_DECLARE(0x62a79a0, internal_62a79a0, public_62a79a0);
extern "C" NAKED register_t __cdecl internal_62a79a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x6C
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x68], 0
        mov byte ptr ds : [ebx+0x69], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_62a7fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_62a7a09
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_62a7a09
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_62a7a09
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_62a7a23
        mov dword ptr ds : [eax+8], ebx
        jmp public_62a7a23
        public_62a7a09 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_62a7a1d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_62a7a23
        public_62a7a1d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_62a7a23
        mov dword ptr ds : [eax], ebx
        public_62a7a23 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_62a7bce
        public_62a7a31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x68]
        test dl, dl
        jne public_62a7bce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_62a7b10
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x68], 0
        jne public_62a7a72
        mov byte ptr ds : [ecx+0x68], 1
        mov byte ptr ds : [edx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_62a7bc2
        public_62a7a72 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_62a7ab1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a7a8b
        mov dword ptr ds : [edx+4], eax
        public_62a7a8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a7a9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a7aac
        public_62a7a9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_62a7aa9
        mov dword ptr ds : [edx], ecx
        jmp public_62a7aac
        public_62a7aa9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_62a7aac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a7ab1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a7ada
        mov dword ptr ds : [edi+4], ecx
        public_62a7ada : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a7af3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7bbf
        public_62a7af3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_62a7b06
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7bbf
        public_62a7b06 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7bbf
        public_62a7b10 : nop
        cmp byte ptr ds : [edx+0x68], 0
        jne public_62a7b33
        mov byte ptr ds : [ecx+0x68], 1
        mov byte ptr ds : [edx+0x68], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x68], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_62a7bc2
        public_62a7b33 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_62a7b73
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_62a7b4b
        mov dword ptr ds : [edx+4], eax
        public_62a7b4b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_62a7b5e
        mov dword ptr ds : [edx+4], ecx
        jmp public_62a7b6d
        public_62a7b5e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_62a7b6b
        mov dword ptr ds : [edx+8], ecx
        jmp public_62a7b6d
        public_62a7b6b : nop
        mov dword ptr ds : [edx], ecx
        public_62a7b6d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_62a7b73 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x68], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x68], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_62a7b9c
        mov dword ptr ds : [edi+4], ecx
        public_62a7b9c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_62a7baf
        mov dword ptr ds : [edi+4], edx
        jmp public_62a7bbd
        public_62a7baf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_62a7bba
        mov dword ptr ds : [edi], edx
        jmp public_62a7bbd
        public_62a7bba : nop
        mov dword ptr ds : [edi+8], edx
        public_62a7bbd : nop
        mov dword ptr ds : [edx], ecx
        public_62a7bbf : nop
        mov dword ptr ds : [ecx+4], edx
        public_62a7bc2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_62a7a31
        public_62a7bce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x68], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x62a79a0)
    }
}

#undef public_62a7a09
#undef public_62a7a1d
#undef public_62a7a23
#undef public_62a7a31
#undef public_62a7a72
#undef public_62a7a8b
#undef public_62a7a9e
#undef public_62a7aa9
#undef public_62a7aac
#undef public_62a7ab1
#undef public_62a7ada
#undef public_62a7af3
#undef public_62a7b06
#undef public_62a7b10
#undef public_62a7b33
#undef public_62a7b4b
#undef public_62a7b5e
#undef public_62a7b6b
#undef public_62a7b6d
#undef public_62a7b73
#undef public_62a7b9c
#undef public_62a7baf
#undef public_62a7bba
#undef public_62a7bbd
#undef public_62a7bbf
#undef public_62a7bc2
#undef public_62a7bce
