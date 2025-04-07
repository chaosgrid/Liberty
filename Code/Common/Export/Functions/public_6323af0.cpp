#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323af0);
CLANG_FORWARD_PROC_SYMBOL(public_6323e20);
CLANG_FORWARD_PROC_SYMBOL(public_63240a0);

#define public_6323b62 _public_6323b62
#define public_6323b76 _public_6323b76
#define public_6323b7c _public_6323b7c
#define public_6323b90 _public_6323b90
#define public_6323be0 _public_6323be0
#define public_6323bf9 _public_6323bf9
#define public_6323c0c _public_6323c0c
#define public_6323c17 _public_6323c17
#define public_6323c1a _public_6323c1a
#define public_6323c1f _public_6323c1f
#define public_6323c4e _public_6323c4e
#define public_6323c67 _public_6323c67
#define public_6323c7a _public_6323c7a
#define public_6323c84 _public_6323c84
#define public_6323cb3 _public_6323cb3
#define public_6323ccb _public_6323ccb
#define public_6323cde _public_6323cde
#define public_6323ceb _public_6323ceb
#define public_6323ced _public_6323ced
#define public_6323cf3 _public_6323cf3
#define public_6323d22 _public_6323d22
#define public_6323d35 _public_6323d35
#define public_6323d40 _public_6323d40
#define public_6323d43 _public_6323d43
#define public_6323d45 _public_6323d45
#define public_6323d48 _public_6323d48
#define public_6323d54 _public_6323d54

PROC_DECLARE(0x6323af0, internal_6323af0, public_6323af0);
extern "C" NAKED register_t __cdecl internal_6323af0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xA0
        mov esi, ecx
        call public_6323e20
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x9C], 0
        mov byte ptr ds : [ebx+0x9D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_63240a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6323b62
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6323b62
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6323b62
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6323b7c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6323b7c
        public_6323b62 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6323b76
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6323b7c
        public_6323b76 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6323b7c
        mov dword ptr ds : [eax], ebx
        public_6323b7c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6323d54
        lea ebx, ds:[ebx]
        public_6323b90 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x9C]
        test dl, dl
        jne public_6323d54
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6323c84
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x9C], 0
        jne public_6323be0
        mov byte ptr ds : [ecx+0x9C], 1
        mov byte ptr ds : [edx+0x9C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x9C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6323d48
        public_6323be0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6323c1f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6323bf9
        mov dword ptr ds : [edx+4], eax
        public_6323bf9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6323c0c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6323c1a
        public_6323c0c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6323c17
        mov dword ptr ds : [edx], ecx
        jmp public_6323c1a
        public_6323c17 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6323c1a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6323c1f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x9C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x9C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6323c4e
        mov dword ptr ds : [edi+4], ecx
        public_6323c4e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6323c67
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6323d45
        public_6323c67 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6323c7a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6323d45
        public_6323c7a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6323d45
        public_6323c84 : nop
        cmp byte ptr ds : [edx+0x9C], 0
        jne public_6323cb3
        mov byte ptr ds : [ecx+0x9C], 1
        mov byte ptr ds : [edx+0x9C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x9C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6323d48
        public_6323cb3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6323cf3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6323ccb
        mov dword ptr ds : [edx+4], eax
        public_6323ccb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6323cde
        mov dword ptr ds : [edx+4], ecx
        jmp public_6323ced
        public_6323cde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6323ceb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6323ced
        public_6323ceb : nop
        mov dword ptr ds : [edx], ecx
        public_6323ced : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6323cf3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x9C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x9C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6323d22
        mov dword ptr ds : [edi+4], ecx
        public_6323d22 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6323d35
        mov dword ptr ds : [edi+4], edx
        jmp public_6323d43
        public_6323d35 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6323d40
        mov dword ptr ds : [edi], edx
        jmp public_6323d43
        public_6323d40 : nop
        mov dword ptr ds : [edi+8], edx
        public_6323d43 : nop
        mov dword ptr ds : [edx], ecx
        public_6323d45 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6323d48 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6323b90
        public_6323d54 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x9C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6323af0)
    }
}

#undef public_6323b62
#undef public_6323b76
#undef public_6323b7c
#undef public_6323b90
#undef public_6323be0
#undef public_6323bf9
#undef public_6323c0c
#undef public_6323c17
#undef public_6323c1a
#undef public_6323c1f
#undef public_6323c4e
#undef public_6323c67
#undef public_6323c7a
#undef public_6323c84
#undef public_6323cb3
#undef public_6323ccb
#undef public_6323cde
#undef public_6323ceb
#undef public_6323ced
#undef public_6323cf3
#undef public_6323d22
#undef public_6323d35
#undef public_6323d40
#undef public_6323d43
#undef public_6323d45
#undef public_6323d48
#undef public_6323d54
