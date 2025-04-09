#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587960);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_587980 _public_587980
#define public_5879b3 _public_5879b3
#define public_5879c8 _public_5879c8
#define public_5879dc _public_5879dc
#define public_587a15 _public_587a15
#define public_587a23 _public_587a23
#define public_587a38 _public_587a38
#define public_587a58 _public_587a58
#define public_587a61 _public_587a61
#define public_587a75 _public_587a75
#define public_587a89 _public_587a89
#define public_587aa5 _public_587aa5
#define public_587ac6 _public_587ac6
#define public_587aea _public_587aea

PROC_DECLARE(0x587960, internal_587960, public_587960);
extern "C" NAKED register_t __cdecl internal_587960()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        cmp dword ptr ss : [esp+8], eax
        je public_587aea
        mov ecx, dword ptr ss : [esp+0x10]
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[ecx+8]
        lea edi, ds:[eax+8]
        lea ecx, ds:[ecx]
        public_587980 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [eax-0x20]
        sub eax, 0x20
        sub ecx, 0x20
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [public_5c7080]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi-0x1C]
        sub edi, 0x20
        mov ebx, eax
        sub ebp, 0x20
        cmp esi, ebx
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [esp+0x20], ecx
        jae public_5879b3
        mov ebx, esi
        public_5879b3 : nop
        lea ecx, ds:[edi-4]
        lea edx, ss:[ebp-4]
        cmp edx, ecx
        jne public_587a23
        cmp dword ptr ss : [ebp+4], ebx
        jae public_5879c8
        call dword ptr ds : [public_5c7064]
        public_5879c8 : nop
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c7068]
        mov eax, dword ptr ss : [ebp+4]
        sub eax, ebx
        cmp eax, esi
        jae public_5879dc
        mov esi, eax
        public_5879dc : nop
        test esi, esi
        jbe public_587a15
        mov ecx, dword ptr ss : [ebp]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_5c709c]
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587a15
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c706c]
        public_587a15 : nop
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c7068]
        jmp public_587ac6
        public_587a23 : nop
        xor esi, esi
        cmp ebx, esi
        jbe public_587a89
        cmp ebx, eax
        jne public_587a89
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        jne public_587a38
        mov eax, dword ptr ds : [public_5c7078]
        public_587a38 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_587a89
        mov eax, dword ptr ss : [ebp]
        cmp eax, esi
        je public_587a61
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_587a58
        cmp cl, 0xFF
        je public_587a58
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_587a61
        public_587a58 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_587a61 : nop
        mov dword ptr ss : [ebp], esi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov eax, dword ptr ds : [edi]
        cmp eax, esi
        jne public_587a75
        mov eax, dword ptr ds : [public_5c7078]
        public_587a75 : nop
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        inc byte ptr ds : [eax-1]
        jmp public_587ac6
        public_587a89 : nop
        push 1
        push ebx
        lea ecx, ss:[ebp-4]
        call dword ptr ds : [public_5c708c]
        test al, al
        je public_587ac6
        mov esi, dword ptr ds : [edi]
        test esi, esi
        jne public_587aa5
        mov esi, dword ptr ds : [public_5c7078]
        public_587aa5 : nop
        mov edi, dword ptr ss : [ebp]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_587ac6 : nop
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [edi+0x10]
        mov dword ptr ss : [ebp+0x10], eax
        mov ecx, dword ptr ds : [edi+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [ebp+0x14], ecx
        cmp eax, dword ptr ss : [esp+0x18]
        jne public_587980
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_587aea : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x587960)
    }
}

#undef public_587980
#undef public_5879b3
#undef public_5879c8
#undef public_5879dc
#undef public_587a15
#undef public_587a23
#undef public_587a38
#undef public_587a58
#undef public_587a61
#undef public_587a75
#undef public_587a89
#undef public_587aa5
#undef public_587ac6
#undef public_587aea
