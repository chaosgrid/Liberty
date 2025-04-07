#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f310f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f38800);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f38869 _public_6f38869
#define public_6f3887d _public_6f3887d
#define public_6f38883 _public_6f38883
#define public_6f38891 _public_6f38891
#define public_6f388d2 _public_6f388d2
#define public_6f388eb _public_6f388eb
#define public_6f388fe _public_6f388fe
#define public_6f38909 _public_6f38909
#define public_6f3890c _public_6f3890c
#define public_6f38911 _public_6f38911
#define public_6f3893a _public_6f3893a
#define public_6f38953 _public_6f38953
#define public_6f38966 _public_6f38966
#define public_6f38970 _public_6f38970
#define public_6f38993 _public_6f38993
#define public_6f389ab _public_6f389ab
#define public_6f389be _public_6f389be
#define public_6f389cb _public_6f389cb
#define public_6f389cd _public_6f389cd
#define public_6f389d3 _public_6f389d3
#define public_6f389fc _public_6f389fc
#define public_6f38a0f _public_6f38a0f
#define public_6f38a1a _public_6f38a1a
#define public_6f38a1d _public_6f38a1d
#define public_6f38a1f _public_6f38a1f
#define public_6f38a22 _public_6f38a22
#define public_6f38a2e _public_6f38a2e

PROC_DECLARE(0x6f38800, internal_6f38800, public_6f38800);
extern "C" NAKED register_t __cdecl internal_6f38800()
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
        call public_6f310f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f38869
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f38869
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f38869
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f38883
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f38883
        public_6f38869 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f3887d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f38883
        public_6f3887d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f38883
        mov dword ptr ds : [eax], ebx
        public_6f38883 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f38a2e
        public_6f38891 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6f38a2e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f38970
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f388d2
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f38a22
        public_6f388d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f38911
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f388eb
        mov dword ptr ds : [edx+4], eax
        public_6f388eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f388fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3890c
        public_6f388fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f38909
        mov dword ptr ds : [edx], ecx
        jmp public_6f3890c
        public_6f38909 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3890c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f38911 : nop
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
        je public_6f3893a
        mov dword ptr ds : [edi+4], ecx
        public_6f3893a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f38953
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f38a1f
        public_6f38953 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f38966
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f38a1f
        public_6f38966 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f38a1f
        public_6f38970 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6f38993
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f38a22
        public_6f38993 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f389d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f389ab
        mov dword ptr ds : [edx+4], eax
        public_6f389ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f389be
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f389cd
        public_6f389be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f389cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f389cd
        public_6f389cb : nop
        mov dword ptr ds : [edx], ecx
        public_6f389cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f389d3 : nop
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
        je public_6f389fc
        mov dword ptr ds : [edi+4], ecx
        public_6f389fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f38a0f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f38a1d
        public_6f38a0f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f38a1a
        mov dword ptr ds : [edi], edx
        jmp public_6f38a1d
        public_6f38a1a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f38a1d : nop
        mov dword ptr ds : [edx], ecx
        public_6f38a1f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f38a22 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f38891
        public_6f38a2e : nop
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
        UNREACHABLE_TRAP(0x6f38800)
    }
}

#undef public_6f38869
#undef public_6f3887d
#undef public_6f38883
#undef public_6f38891
#undef public_6f388d2
#undef public_6f388eb
#undef public_6f388fe
#undef public_6f38909
#undef public_6f3890c
#undef public_6f38911
#undef public_6f3893a
#undef public_6f38953
#undef public_6f38966
#undef public_6f38970
#undef public_6f38993
#undef public_6f389ab
#undef public_6f389be
#undef public_6f389cb
#undef public_6f389cd
#undef public_6f389d3
#undef public_6f389fc
#undef public_6f38a0f
#undef public_6f38a1a
#undef public_6f38a1d
#undef public_6f38a1f
#undef public_6f38a22
#undef public_6f38a2e
