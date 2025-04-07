#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66194e0);
CLANG_FORWARD_PROC_SYMBOL(public_661a9d0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661954d _public_661954d
#define public_6619561 _public_6619561
#define public_6619567 _public_6619567
#define public_6619575 _public_6619575
#define public_66195b6 _public_66195b6
#define public_66195cf _public_66195cf
#define public_66195e2 _public_66195e2
#define public_66195ed _public_66195ed
#define public_66195f0 _public_66195f0
#define public_66195f5 _public_66195f5
#define public_661961e _public_661961e
#define public_6619637 _public_6619637
#define public_661964a _public_661964a
#define public_6619654 _public_6619654
#define public_6619677 _public_6619677
#define public_661968f _public_661968f
#define public_66196a2 _public_66196a2
#define public_66196af _public_66196af
#define public_66196b1 _public_66196b1
#define public_66196b7 _public_66196b7
#define public_66196e0 _public_66196e0
#define public_66196f3 _public_66196f3
#define public_66196fe _public_66196fe
#define public_6619701 _public_6619701
#define public_6619703 _public_6619703
#define public_6619706 _public_6619706
#define public_6619712 _public_6619712

PROC_DECLARE(0x66194e0, internal_66194e0, public_66194e0);
extern "C" NAKED register_t __cdecl internal_66194e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x34
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x30], 0
        mov byte ptr ds : [ebx+0x31], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_661a9d0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_661954d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_661954d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jl public_661954d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6619567
        mov dword ptr ds : [eax+8], ebx
        jmp public_6619567
        public_661954d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6619561
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6619567
        public_6619561 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6619567
        mov dword ptr ds : [eax], ebx
        public_6619567 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6619712
        public_6619575 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6619712
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6619654
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x30], 0
        jne public_66195b6
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6619706
        public_66195b6 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_66195f5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_66195cf
        mov dword ptr ds : [edx+4], eax
        public_66195cf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66195e2
        mov dword ptr ds : [edx+4], ecx
        jmp public_66195f0
        public_66195e2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_66195ed
        mov dword ptr ds : [edx], ecx
        jmp public_66195f0
        public_66195ed : nop
        mov dword ptr ds : [edx+8], ecx
        public_66195f0 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_66195f5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_661961e
        mov dword ptr ds : [edi+4], ecx
        public_661961e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6619637
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619703
        public_6619637 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_661964a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619703
        public_661964a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6619703
        public_6619654 : nop
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6619677
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6619706
        public_6619677 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_66196b7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_661968f
        mov dword ptr ds : [edx+4], eax
        public_661968f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66196a2
        mov dword ptr ds : [edx+4], ecx
        jmp public_66196b1
        public_66196a2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_66196af
        mov dword ptr ds : [edx+8], ecx
        jmp public_66196b1
        public_66196af : nop
        mov dword ptr ds : [edx], ecx
        public_66196b1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_66196b7 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_66196e0
        mov dword ptr ds : [edi+4], ecx
        public_66196e0 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_66196f3
        mov dword ptr ds : [edi+4], edx
        jmp public_6619701
        public_66196f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_66196fe
        mov dword ptr ds : [edi], edx
        jmp public_6619701
        public_66196fe : nop
        mov dword ptr ds : [edi+8], edx
        public_6619701 : nop
        mov dword ptr ds : [edx], ecx
        public_6619703 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6619706 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6619575
        public_6619712 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x66194e0)
    }
}

#undef public_661954d
#undef public_6619561
#undef public_6619567
#undef public_6619575
#undef public_66195b6
#undef public_66195cf
#undef public_66195e2
#undef public_66195ed
#undef public_66195f0
#undef public_66195f5
#undef public_661961e
#undef public_6619637
#undef public_661964a
#undef public_6619654
#undef public_6619677
#undef public_661968f
#undef public_66196a2
#undef public_66196af
#undef public_66196b1
#undef public_66196b7
#undef public_66196e0
#undef public_66196f3
#undef public_66196fe
#undef public_6619701
#undef public_6619703
#undef public_6619706
#undef public_6619712
