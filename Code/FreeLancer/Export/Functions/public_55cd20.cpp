#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55b950);

#define public_55cd5a _public_55cd5a
#define public_55cd6b _public_55cd6b
#define public_55cd7e _public_55cd7e
#define public_55cdb5 _public_55cdb5
#define public_55cdcc _public_55cdcc
#define public_55cde0 _public_55cde0
#define public_55cdfc _public_55cdfc
#define public_55ce19 _public_55ce19
#define public_55ce35 _public_55ce35
#define public_55ce51 _public_55ce51
#define public_55ce60 _public_55ce60
#define public_55ce7c _public_55ce7c
#define public_55ce8d _public_55ce8d
#define public_55cea0 _public_55cea0
#define public_55ced7 _public_55ced7
#define public_55cee8 _public_55cee8
#define public_55cefc _public_55cefc
#define public_55cf18 _public_55cf18
#define public_55cf2c _public_55cf2c
#define public_55cf48 _public_55cf48
#define public_55cf64 _public_55cf64
#define public_55cf68 _public_55cf68
#define public_55cf6e _public_55cf6e

PROC_DECLARE(0x55cd20, internal_55cd20, public_55cd20);
extern "C" NAKED register_t __cdecl internal_55cd20()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x3A0]
        test eax, eax
        mov dword ptr ss : [esp+0x10], edi
        lea ebx, ds:[edi+0x360]
        jne public_55ce60
        mov eax, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [edi+0x3AC]
        mov eax, dword ptr ds : [eax]
        lea esi, ds:[edi+0x3A4]
        mov ebp, ecx
        cmp eax, ebp
        jae public_55cd5a
        mov ebp, eax
        public_55cd5a : nop
        cmp ebx, esi
        jne public_55cdcc
        mov esi, eax
        cmp dword ptr ds : [ebx+8], ebp
        jae public_55cd6b
        call dword ptr ds : [public_5c7064]
        public_55cd6b : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_55cd7e
        mov esi, eax
        public_55cd7e : nop
        test esi, esi
        jbe public_55cdb5
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_5c709c]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55cdb5
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55cdb5 : nop
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_5c707c]
        mov ecx, dword ptr ds : [edi+0x3C4]
        jmp public_55cf6e
        public_55cdcc : nop
        test ebp, ebp
        jbe public_55ce19
        cmp ebp, ecx
        jne public_55ce19
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55cde0
        mov eax, dword ptr ds : [public_5c7078]
        public_55cde0 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_55ce19
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55cdfc
        mov eax, dword ptr ds : [public_5c7078]
        public_55cdfc : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        mov ecx, dword ptr ds : [edi+0x3C4]
        jmp public_55cf6e
        public_55ce19 : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55ce51
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_55ce35
        mov esi, dword ptr ds : [public_5c7078]
        public_55ce35 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55ce51 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x3C4]
        jmp public_55cf6e
        public_55ce60 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov ecx, dword ptr ds : [edi+0x3BC]
        mov eax, dword ptr ds : [edx]
        lea esi, ds:[edi+0x3B4]
        mov ebp, ecx
        cmp eax, ebp
        jae public_55ce7c
        mov ebp, eax
        public_55ce7c : nop
        cmp ebx, esi
        jne public_55cee8
        mov esi, eax
        cmp dword ptr ds : [ebx+8], ebp
        jae public_55ce8d
        call dword ptr ds : [public_5c7064]
        public_55ce8d : nop
        mov ecx, ebx
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ds : [ebx+8]
        sub eax, ebp
        cmp eax, esi
        jae public_55cea0
        mov esi, eax
        public_55cea0 : nop
        test esi, esi
        jbe public_55ced7
        mov ecx, dword ptr ds : [ebx+4]
        add ebp, ecx
        sub eax, esi
        push eax
        lea edx, ds:[esi+ebp]
        push edx
        push ebp
        call dword ptr ds : [public_5c709c]
        mov ebp, dword ptr ds : [ebx+8]
        add esp, 0xC
        push 0
        sub ebp, esi
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55ced7
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55ced7 : nop
        push 0
        push 0
        mov ecx, ebx
        call dword ptr ds : [public_5c707c]
        jmp public_55cf68
        public_55cee8 : nop
        test ebp, ebp
        jbe public_55cf2c
        cmp ebp, ecx
        jne public_55cf2c
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55cefc
        mov eax, dword ptr ds : [public_5c7078]
        public_55cefc : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_55cf2c
        push 1
        mov ecx, ebx
        call dword ptr ds : [public_5c7084]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_55cf18
        mov eax, dword ptr ds : [public_5c7078]
        public_55cf18 : nop
        mov dword ptr ds : [ebx+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_55cf68
        public_55cf2c : nop
        push 1
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_55cf64
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_55cf48
        mov esi, dword ptr ds : [public_5c7078]
        public_55cf48 : nop
        mov edi, dword ptr ds : [ebx+4]
        mov ecx, ebp
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        push ebp
        mov ecx, ebx
        call dword ptr ds : [public_5c706c]
        public_55cf64 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_55cf68 : nop
        mov ecx, dword ptr ds : [edi+0x3C8]
        public_55cf6e : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+0x374], ecx
        push edx
        mov ecx, edi
        call public_55b950
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x55cd20)
    }
}

#undef public_55cd5a
#undef public_55cd6b
#undef public_55cd7e
#undef public_55cdb5
#undef public_55cdcc
#undef public_55cde0
#undef public_55cdfc
#undef public_55ce19
#undef public_55ce35
#undef public_55ce51
#undef public_55ce60
#undef public_55ce7c
#undef public_55ce8d
#undef public_55cea0
#undef public_55ced7
#undef public_55cee8
#undef public_55cefc
#undef public_55cf18
#undef public_55cf2c
#undef public_55cf48
#undef public_55cf64
#undef public_55cf68
#undef public_55cf6e
