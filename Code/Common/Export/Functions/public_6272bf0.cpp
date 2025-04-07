#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a00);
CLANG_FORWARD_PROC_SYMBOL(public_6272bf0);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6272c1c _public_6272c1c
#define public_6272c24 _public_6272c24
#define public_6272c2f _public_6272c2f
#define public_6272c37 _public_6272c37
#define public_6272c42 _public_6272c42
#define public_6272c50 _public_6272c50
#define public_6272c6c _public_6272c6c
#define public_6272c87 _public_6272c87
#define public_6272c8f _public_6272c8f
#define public_6272c97 _public_6272c97
#define public_6272c9f _public_6272c9f
#define public_6272ca7 _public_6272ca7
#define public_6272cb7 _public_6272cb7
#define public_6272cbf _public_6272cbf
#define public_6272cc6 _public_6272cc6
#define public_6272cd4 _public_6272cd4
#define public_6272ce4 _public_6272ce4
#define public_6272cfc _public_6272cfc
#define public_6272d1a _public_6272d1a
#define public_6272d37 _public_6272d37
#define public_6272d4b _public_6272d4b
#define public_6272d53 _public_6272d53
#define public_6272d59 _public_6272d59
#define public_6272d82 _public_6272d82

PROC_DECLARE(0x6272bf0, internal_6272bf0, public_6272bf0);
extern "C" NAKED register_t __cdecl internal_6272bf0()
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
        je public_6272d82
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6272c1c
        xor esi, esi
        jmp public_6272c24
        public_6272c1c : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6272c24 : nop
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        jne public_6272c2f
        xor ecx, ecx
        jmp public_6272c37
        public_6272c2f : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6272c37 : nop
        cmp esi, ecx
        ja public_6272c87
        mov ecx, dword ptr ds : [edi+8]
        cmp eax, ecx
        je public_6272c50
        public_6272c42 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6272c42
        public_6272c50 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6272c6c
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
        public_6272c6c : nop
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
        public_6272c87 : nop
        test eax, eax
        jne public_6272c8f
        xor esi, esi
        jmp public_6272c97
        public_6272c8f : nop
        mov esi, dword ptr ds : [edi+8]
        sub esi, eax
        sar esi, 2
        public_6272c97 : nop
        test edx, edx
        jne public_6272c9f
        xor ecx, ecx
        jmp public_6272ca7
        public_6272c9f : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        sub ecx, edx
        sar ecx, 2
        public_6272ca7 : nop
        cmp esi, ecx
        ja public_6272d37
        test edx, edx
        jne public_6272cb7
        xor ecx, ecx
        jmp public_6272cbf
        public_6272cb7 : nop
        mov ecx, dword ptr ss : [ebp+8]
        sub ecx, edx
        sar ecx, 2
        public_6272cbf : nop
        lea ecx, ds:[eax+ecx*4]
        cmp eax, ecx
        je public_6272cd4
        public_6272cc6 : nop
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        add eax, 4
        add edx, 4
        cmp eax, ecx
        jne public_6272cc6
        public_6272cd4 : nop
        mov eax, dword ptr ds : [edi+8]
        cmp ecx, eax
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x18], eax
        mov esi, ecx
        je public_6272cfc
        public_6272ce4 : nop
        push esi
        push ebx
        call public_630cd00
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add ebx, 4
        cmp esi, eax
        jne public_6272ce4
        public_6272cfc : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        jne public_6272d1a
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
        public_6272d1a : nop
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
        public_6272d37 : nop
        push edx
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        test ecx, ecx
        jne public_6272d4b
        xor eax, eax
        jmp public_6272d53
        public_6272d4b : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6272d53 : nop
        test eax, eax
        jge public_6272d59
        xor eax, eax
        public_6272d59 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [edi+8]
        mov edi, dword ptr ds : [edi+4]
        push eax
        push ecx
        push edi
        mov ecx, ebp
        call public_6272a00
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        public_6272d82 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6272bf0)
    }
}

#undef public_6272c1c
#undef public_6272c24
#undef public_6272c2f
#undef public_6272c37
#undef public_6272c42
#undef public_6272c50
#undef public_6272c6c
#undef public_6272c87
#undef public_6272c8f
#undef public_6272c97
#undef public_6272c9f
#undef public_6272ca7
#undef public_6272cb7
#undef public_6272cbf
#undef public_6272cc6
#undef public_6272cd4
#undef public_6272ce4
#undef public_6272cfc
#undef public_6272d1a
#undef public_6272d37
#undef public_6272d4b
#undef public_6272d53
#undef public_6272d59
#undef public_6272d82
