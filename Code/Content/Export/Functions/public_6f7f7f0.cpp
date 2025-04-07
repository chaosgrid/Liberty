#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f7f7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7f81c _public_6f7f81c
#define public_6f7f824 _public_6f7f824
#define public_6f7f82f _public_6f7f82f
#define public_6f7f837 _public_6f7f837
#define public_6f7f842 _public_6f7f842
#define public_6f7f850 _public_6f7f850
#define public_6f7f86c _public_6f7f86c
#define public_6f7f887 _public_6f7f887
#define public_6f7f88f _public_6f7f88f
#define public_6f7f897 _public_6f7f897
#define public_6f7f89f _public_6f7f89f
#define public_6f7f8a7 _public_6f7f8a7
#define public_6f7f8b7 _public_6f7f8b7
#define public_6f7f8bf _public_6f7f8bf
#define public_6f7f8c6 _public_6f7f8c6
#define public_6f7f8d4 _public_6f7f8d4
#define public_6f7f8e4 _public_6f7f8e4
#define public_6f7f8fc _public_6f7f8fc
#define public_6f7f91a _public_6f7f91a
#define public_6f7f937 _public_6f7f937
#define public_6f7f94b _public_6f7f94b
#define public_6f7f953 _public_6f7f953
#define public_6f7f959 _public_6f7f959
#define public_6f7f982 _public_6f7f982

PROC_DECLARE(0x6f7f7f0, internal_6f7f7f0, public_6f7f7f0);
extern "C" NAKED register_t __cdecl internal_6f7f7f0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov ebx, ecx
        add edi, 4
        lea ebp, ds:[ebx+4]
        cmp ebp, edi
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ds : [ebx], eax
        je public_6f7f982
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7f81c
        xor esi, esi
        jmp public_6f7f824
        public_6f7f81c : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6f7f824 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6f7f82f
        xor ecx, ecx
        jmp public_6f7f837
        public_6f7f82f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f7f837 : nop
        cmp esi, ecx
        ja public_6f7f887
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6f7f850
        public_6f7f842 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f7f842
        public_6f7f850 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7f86c
        mov ecx, dword ptr ss : [ebp+4]
        xor edi, edi
        lea edx, ds:[ecx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7f86c : nop
        mov edi, dword ptr ds : [edi+8]
        mov ecx, dword ptr ss : [ebp+4]
        sub edi, eax
        sar edi, 2
        lea edx, ds:[ecx+edi*4]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_6f7f887 : nop
        test eax, eax
        jne public_6f7f88f
        xor esi, esi
        jmp public_6f7f897
        public_6f7f88f : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6f7f897 : nop
        test edx, edx
        jne public_6f7f89f
        xor ecx, ecx
        jmp public_6f7f8a7
        public_6f7f89f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6f7f8a7 : nop
        cmp esi, ecx
        ja public_6f7f937
        test edx, edx
        jne public_6f7f8b7
        xor ecx, ecx
        jmp public_6f7f8bf
        public_6f7f8b7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6f7f8bf : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6f7f8d4
        public_6f7f8c6 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6f7f8c6
        public_6f7f8d4 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, ecx
        je public_6f7f8fc
        public_6f7f8e4 : nop
        push esi
        push ebx
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6f7f8e4
        public_6f7f8fc : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6f7f91a
        mov eax, dword ptr ss : [ebp+4]
        xor edi, edi
        lea ecx, ds:[eax+edi*4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f91a : nop
        mov edi, dword ptr ds : [edi+8]
        sub edi, eax
        mov eax, dword ptr ss : [ebp+4]
        sar edi, 2
        lea ecx, ds:[eax+edi*4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], ecx
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6f7f937 : nop
        push edx
        call public_6fa8fe0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f7f94b
        xor eax, eax
        jmp public_6f7f953
        public_6f7f94b : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6f7f953 : nop
        test eax, eax
        jge public_6f7f959
        xor eax, eax
        public_6f7f959 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6fa912a
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6eed270
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6f7f982 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6f7f7f0)
    }
}

#undef public_6f7f81c
#undef public_6f7f824
#undef public_6f7f82f
#undef public_6f7f837
#undef public_6f7f842
#undef public_6f7f850
#undef public_6f7f86c
#undef public_6f7f887
#undef public_6f7f88f
#undef public_6f7f897
#undef public_6f7f89f
#undef public_6f7f8a7
#undef public_6f7f8b7
#undef public_6f7f8bf
#undef public_6f7f8c6
#undef public_6f7f8d4
#undef public_6f7f8e4
#undef public_6f7f8fc
#undef public_6f7f91a
#undef public_6f7f937
#undef public_6f7f94b
#undef public_6f7f953
#undef public_6f7f959
#undef public_6f7f982
