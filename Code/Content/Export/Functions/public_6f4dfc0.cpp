#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4dfc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4e033 _public_6f4e033
#define public_6f4e047 _public_6f4e047
#define public_6f4e04d _public_6f4e04d
#define public_6f4e060 _public_6f4e060
#define public_6f4e0a1 _public_6f4e0a1
#define public_6f4e0ba _public_6f4e0ba
#define public_6f4e0cd _public_6f4e0cd
#define public_6f4e0d8 _public_6f4e0d8
#define public_6f4e0db _public_6f4e0db
#define public_6f4e0e0 _public_6f4e0e0
#define public_6f4e109 _public_6f4e109
#define public_6f4e122 _public_6f4e122
#define public_6f4e135 _public_6f4e135
#define public_6f4e13f _public_6f4e13f
#define public_6f4e162 _public_6f4e162
#define public_6f4e17a _public_6f4e17a
#define public_6f4e18d _public_6f4e18d
#define public_6f4e19a _public_6f4e19a
#define public_6f4e19c _public_6f4e19c
#define public_6f4e1a2 _public_6f4e1a2
#define public_6f4e1cb _public_6f4e1cb
#define public_6f4e1de _public_6f4e1de
#define public_6f4e1e9 _public_6f4e1e9
#define public_6f4e1ec _public_6f4e1ec
#define public_6f4e1ee _public_6f4e1ee
#define public_6f4e1f1 _public_6f4e1f1
#define public_6f4e1fd _public_6f4e1fd

PROC_DECLARE(0x6f4dfc0, internal_6f4dfc0, public_6f4dfc0);
extern "C" NAKED register_t __cdecl internal_6f4dfc0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f4e4c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f4e033
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f4e033
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6fb32bc]
        add esp, 8
        test al, al
        jne public_6f4e033
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f4e04d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4e04d
        public_6f4e033 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4e047
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f4e04d
        public_6f4e047 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f4e04d
        mov dword ptr ds : [eax], ebx
        public_6f4e04d : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4e1fd
        nop 
        lea esp, ss:[esp]
        public_6f4e060 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f4e1fd
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f4e13f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f4e0a1
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f4e1f1
        public_6f4e0a1 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f4e0e0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4e0ba
        mov dword ptr ds : [edx+4], eax
        public_6f4e0ba : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4e0cd
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4e0db
        public_6f4e0cd : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f4e0d8
        mov dword ptr ds : [edx], ecx
        jmp public_6f4e0db
        public_6f4e0d8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4e0db : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f4e0e0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4e109
        mov dword ptr ds : [edi+4], ecx
        public_6f4e109 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4e122
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4e1ee
        public_6f4e122 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4e135
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4e1ee
        public_6f4e135 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4e1ee
        public_6f4e13f : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f4e162
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f4e1f1
        public_6f4e162 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f4e1a2
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4e17a
        mov dword ptr ds : [edx+4], eax
        public_6f4e17a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4e18d
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4e19c
        public_6f4e18d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4e19a
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4e19c
        public_6f4e19a : nop
        mov dword ptr ds : [edx], ecx
        public_6f4e19c : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f4e1a2 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4e1cb
        mov dword ptr ds : [edi+4], ecx
        public_6f4e1cb : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4e1de
        mov dword ptr ds : [edi+4], edx
        jmp public_6f4e1ec
        public_6f4e1de : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f4e1e9
        mov dword ptr ds : [edi], edx
        jmp public_6f4e1ec
        public_6f4e1e9 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f4e1ec : nop
        mov dword ptr ds : [edx], ecx
        public_6f4e1ee : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f4e1f1 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f4e060
        public_6f4e1fd : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f4dfc0)
    }
}

#undef public_6f4e033
#undef public_6f4e047
#undef public_6f4e04d
#undef public_6f4e060
#undef public_6f4e0a1
#undef public_6f4e0ba
#undef public_6f4e0cd
#undef public_6f4e0d8
#undef public_6f4e0db
#undef public_6f4e0e0
#undef public_6f4e109
#undef public_6f4e122
#undef public_6f4e135
#undef public_6f4e13f
#undef public_6f4e162
#undef public_6f4e17a
#undef public_6f4e18d
#undef public_6f4e19a
#undef public_6f4e19c
#undef public_6f4e1a2
#undef public_6f4e1cb
#undef public_6f4e1de
#undef public_6f4e1e9
#undef public_6f4e1ec
#undef public_6f4e1ee
#undef public_6f4e1f1
#undef public_6f4e1fd
