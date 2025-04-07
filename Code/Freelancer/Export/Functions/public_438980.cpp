#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_438980);
CLANG_FORWARD_PROC_SYMBOL(public_4b2b50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4389e9 _public_4389e9
#define public_4389fd _public_4389fd
#define public_438a03 _public_438a03
#define public_438a11 _public_438a11
#define public_438a52 _public_438a52
#define public_438a6b _public_438a6b
#define public_438a7e _public_438a7e
#define public_438a89 _public_438a89
#define public_438a8c _public_438a8c
#define public_438a91 _public_438a91
#define public_438aba _public_438aba
#define public_438ad3 _public_438ad3
#define public_438ae6 _public_438ae6
#define public_438af0 _public_438af0
#define public_438b13 _public_438b13
#define public_438b2b _public_438b2b
#define public_438b3e _public_438b3e
#define public_438b4b _public_438b4b
#define public_438b4d _public_438b4d
#define public_438b53 _public_438b53
#define public_438b7c _public_438b7c
#define public_438b8f _public_438b8f
#define public_438b9a _public_438b9a
#define public_438b9d _public_438b9d
#define public_438b9f _public_438b9f
#define public_438ba2 _public_438ba2
#define public_438bae _public_438bae

PROC_DECLARE(0x438980, internal_438980, public_438980);
extern "C" NAKED register_t __cdecl internal_438980()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x3C
        mov esi, ecx
        call public_5b7e84
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
        call public_4b2b50
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4389e9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4389e9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_4389e9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_438a03
        mov dword ptr ds : [eax+8], ebx
        jmp public_438a03
        public_4389e9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4389fd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_438a03
        public_4389fd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_438a03
        mov dword ptr ds : [eax], ebx
        public_438a03 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_438bae
        public_438a11 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_438bae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_438af0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x38], 0
        jne public_438a52
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_438ba2
        public_438a52 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_438a91
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_438a6b
        mov dword ptr ds : [edx+4], eax
        public_438a6b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_438a7e
        mov dword ptr ds : [edx+4], ecx
        jmp public_438a8c
        public_438a7e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_438a89
        mov dword ptr ds : [edx], ecx
        jmp public_438a8c
        public_438a89 : nop
        mov dword ptr ds : [edx+8], ecx
        public_438a8c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_438a91 : nop
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
        je public_438aba
        mov dword ptr ds : [edi+4], ecx
        public_438aba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_438ad3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_438b9f
        public_438ad3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_438ae6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_438b9f
        public_438ae6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_438b9f
        public_438af0 : nop
        cmp byte ptr ds : [edx+0x38], 0
        jne public_438b13
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x38], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_438ba2
        public_438b13 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_438b53
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_438b2b
        mov dword ptr ds : [edx+4], eax
        public_438b2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_438b3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_438b4d
        public_438b3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_438b4b
        mov dword ptr ds : [edx+8], ecx
        jmp public_438b4d
        public_438b4b : nop
        mov dword ptr ds : [edx], ecx
        public_438b4d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_438b53 : nop
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
        je public_438b7c
        mov dword ptr ds : [edi+4], ecx
        public_438b7c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_438b8f
        mov dword ptr ds : [edi+4], edx
        jmp public_438b9d
        public_438b8f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_438b9a
        mov dword ptr ds : [edi], edx
        jmp public_438b9d
        public_438b9a : nop
        mov dword ptr ds : [edi+8], edx
        public_438b9d : nop
        mov dword ptr ds : [edx], ecx
        public_438b9f : nop
        mov dword ptr ds : [ecx+4], edx
        public_438ba2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_438a11
        public_438bae : nop
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
        UNREACHABLE_TRAP(0x438980)
    }
}

#undef public_4389e9
#undef public_4389fd
#undef public_438a03
#undef public_438a11
#undef public_438a52
#undef public_438a6b
#undef public_438a7e
#undef public_438a89
#undef public_438a8c
#undef public_438a91
#undef public_438aba
#undef public_438ad3
#undef public_438ae6
#undef public_438af0
#undef public_438b13
#undef public_438b2b
#undef public_438b3e
#undef public_438b4b
#undef public_438b4d
#undef public_438b53
#undef public_438b7c
#undef public_438b8f
#undef public_438b9a
#undef public_438b9d
#undef public_438b9f
#undef public_438ba2
#undef public_438bae
