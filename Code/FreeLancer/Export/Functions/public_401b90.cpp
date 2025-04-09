#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401b90);
CLANG_FORWARD_PROC_SYMBOL(public_401e30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_401c06 _public_401c06
#define public_401c1a _public_401c1a
#define public_401c20 _public_401c20
#define public_401c30 _public_401c30
#define public_401c54 _public_401c54
#define public_401c71 _public_401c71
#define public_401c8a _public_401c8a
#define public_401c9d _public_401c9d
#define public_401ca8 _public_401ca8
#define public_401cab _public_401cab
#define public_401cb0 _public_401cb0
#define public_401cd9 _public_401cd9
#define public_401cf2 _public_401cf2
#define public_401d05 _public_401d05
#define public_401d0f _public_401d0f
#define public_401d31 _public_401d31
#define public_401d44 _public_401d44
#define public_401d51 _public_401d51
#define public_401d53 _public_401d53
#define public_401d59 _public_401d59
#define public_401d82 _public_401d82
#define public_401d95 _public_401d95
#define public_401da0 _public_401da0
#define public_401da3 _public_401da3
#define public_401da5 _public_401da5
#define public_401da8 _public_401da8
#define public_401db4 _public_401db4

PROC_DECLARE(0x401b90, internal_401b90, public_401b90);
extern "C" NAKED register_t __cdecl internal_401b90()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x1C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x18], 0
        mov byte ptr ds : [ebx+0x19], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_401e30
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_401c06
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_401c06
        mov eax, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ss : [ebp]
        push eax
        push ebp
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jl public_401c06
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_401c20
        mov dword ptr ds : [eax+8], ebx
        jmp public_401c20
        public_401c06 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_401c1a
        mov dword ptr ds : [eax+4], ebx
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+8], ebx
        jmp public_401c20
        public_401c1a : nop
        cmp edi, dword ptr ds : [eax]
        jne public_401c20
        mov dword ptr ds : [eax], ebx
        public_401c20 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov eax, ebx
        je public_401db4
        mov edi, edi
        public_401c30 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_401db4
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_401d0f
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x18], 0
        jne public_401c71
        public_401c54 : nop
        mov byte ptr ds : [ecx+0x18], 1
        mov byte ptr ds : [edx+0x18], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_401da8
        public_401c71 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_401cb0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_401c8a
        mov dword ptr ds : [edx+4], eax
        public_401c8a : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_401c9d
        mov dword ptr ds : [edx+4], ecx
        jmp public_401cab
        public_401c9d : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_401ca8
        mov dword ptr ds : [edx], ecx
        jmp public_401cab
        public_401ca8 : nop
        mov dword ptr ds : [edx+8], ecx
        public_401cab : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_401cb0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_401cd9
        mov dword ptr ds : [edi+4], ecx
        public_401cd9 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_401cf2
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_401da5
        public_401cf2 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_401d05
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_401da5
        public_401d05 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_401da5
        public_401d0f : nop
        cmp byte ptr ds : [edx+0x18], 0
        je public_401c54
        cmp eax, dword ptr ds : [ecx]
        jne public_401d59
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_401d31
        mov dword ptr ds : [edx+4], eax
        public_401d31 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_401d44
        mov dword ptr ds : [edx+4], ecx
        jmp public_401d53
        public_401d44 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_401d51
        mov dword ptr ds : [edx+8], ecx
        jmp public_401d53
        public_401d51 : nop
        mov dword ptr ds : [edx], ecx
        public_401d53 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_401d59 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_401d82
        mov dword ptr ds : [edi+4], ecx
        public_401d82 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_401d95
        mov dword ptr ds : [edi+4], edx
        jmp public_401da3
        public_401d95 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_401da0
        mov dword ptr ds : [edi], edx
        jmp public_401da3
        public_401da0 : nop
        mov dword ptr ds : [edi+8], edx
        public_401da3 : nop
        mov dword ptr ds : [edx], ecx
        public_401da5 : nop
        mov dword ptr ds : [ecx+4], edx
        public_401da8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_401c30
        public_401db4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x401b90)
    }
}

#undef public_401c06
#undef public_401c1a
#undef public_401c20
#undef public_401c30
#undef public_401c54
#undef public_401c71
#undef public_401c8a
#undef public_401c9d
#undef public_401ca8
#undef public_401cab
#undef public_401cb0
#undef public_401cd9
#undef public_401cf2
#undef public_401d05
#undef public_401d0f
#undef public_401d31
#undef public_401d44
#undef public_401d51
#undef public_401d53
#undef public_401d59
#undef public_401d82
#undef public_401d95
#undef public_401da0
#undef public_401da3
#undef public_401da5
#undef public_401da8
#undef public_401db4
