#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9f00);
CLANG_FORWARD_PROC_SYMBOL(public_4ca070);
CLANG_FORWARD_PROC_SYMBOL(public_4ca220);
CLANG_FORWARD_PROC_SYMBOL(public_4ca2f0);

#define public_4c9f15 _public_4c9f15
#define public_4c9f37 _public_4c9f37
#define public_4c9f79 _public_4c9f79
#define public_4c9f92 _public_4c9f92
#define public_4c9f9c _public_4c9f9c
#define public_4c9fcc _public_4c9fcc
#define public_4c9fe3 _public_4c9fe3
#define public_4ca014 _public_4ca014
#define public_4ca01e _public_4ca01e
#define public_4ca04f _public_4ca04f
#define public_4ca066 _public_4ca066

PROC_DECLARE(0x4c9f00, internal_4c9f00, public_4c9f00);
extern "C" NAKED register_t __cdecl internal_4c9f00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea edx, ds:[esi+0x68]
        push edi
        xor ebx, ebx
        mov eax, edx
        mov ecx, 8
        or edi, 0xFFFFFFFF
        public_4c9f15 : nop
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], ebx
        mov dword ptr ds : [eax+0xC], ebx
        mov dword ptr ds : [eax+0x10], ebx
        mov dword ptr ds : [eax+0x14], edi
        add eax, 0x18
        dec ecx
        jne public_4c9f15
        lea eax, ds:[esi+0x128]
        mov ecx, 8
        public_4c9f37 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        add eax, 0x94
        dec ecx
        jne public_4c9f37
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], edx
        mov edi, dword ptr ds : [eax+4]
        call dword ptr ds : [public_5c60e4]
        cmp edi, ebx
        je public_4c9f9c
        push edi
        push ebx
        mov ecx, eax
        xor ebp, ebp
        call dword ptr ds : [public_5c619c]
        cmp eax, ebx
        je public_4c9f79
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c7078]
        je public_4c9f79
        mov ebp, eax
        public_4c9f79 : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 8
        jge public_4c9f9c
        cmp eax, ebx
        lea ecx, ds:[eax+1]
        mov dword ptr ds : [esi], ecx
        je public_4c9f92
        mov ecx, esi
        call public_4ca2f0
        xor eax, eax
        public_4c9f92 : nop
        push ebp
        push ebx
        push eax
        mov ecx, esi
        call public_4ca220
        public_4c9f9c : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx]
        call dword ptr ds : [public_5c60e4]
        cmp edi, ebx
        je public_4c9fe3
        push edi
        push 1
        mov ecx, eax
        xor ebp, ebp
        call dword ptr ds : [public_5c619c]
        cmp eax, ebx
        je public_4c9fcc
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c7078]
        je public_4c9fcc
        mov ebp, eax
        public_4c9fcc : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 8
        jge public_4c9fe3
        push ebp
        lea ecx, ds:[eax+1]
        push 1
        mov dword ptr ds : [esi], ecx
        push eax
        mov ecx, esi
        call public_4ca220
        public_4c9fe3 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [edx+8]
        call dword ptr ds : [public_5c60e4]
        cmp edi, ebx
        je public_4ca01e
        push edi
        push 2
        mov ecx, eax
        xor ebp, ebp
        call dword ptr ds : [public_5c619c]
        cmp eax, ebx
        je public_4ca014
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c7078]
        je public_4ca014
        mov ebp, eax
        public_4ca014 : nop
        push ebp
        push 2
        mov ecx, esi
        call public_4ca070
        public_4ca01e : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ds : [eax+0xC]
        call dword ptr ds : [public_5c60e4]
        cmp edi, ebx
        je public_4ca066
        push edi
        push 3
        mov ecx, eax
        xor ebp, ebp
        call dword ptr ds : [public_5c619c]
        cmp eax, ebx
        je public_4ca04f
        mov eax, dword ptr ds : [eax+8]
        cmp eax, ebx
        mov ebp, dword ptr ds : [public_5c7078]
        je public_4ca04f
        mov ebp, eax
        public_4ca04f : nop
        mov eax, dword ptr ds : [esi]
        cmp eax, 8
        jge public_4ca066
        push ebp
        lea ecx, ds:[eax+1]
        push 3
        mov dword ptr ds : [esi], ecx
        push eax
        mov ecx, esi
        call public_4ca220
        public_4ca066 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4c9f00)
    }
}

#undef public_4c9f15
#undef public_4c9f37
#undef public_4c9f79
#undef public_4c9f92
#undef public_4c9f9c
#undef public_4c9fcc
#undef public_4c9fe3
#undef public_4ca014
#undef public_4ca01e
#undef public_4ca04f
#undef public_4ca066
