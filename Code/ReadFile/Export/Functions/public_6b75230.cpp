#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76c30);

#define public_6b75282 _public_6b75282
#define public_6b7528e _public_6b7528e
#define public_6b75295 _public_6b75295
#define public_6b7529c _public_6b7529c
#define public_6b752ad _public_6b752ad
#define public_6b752bd _public_6b752bd
#define public_6b752ca _public_6b752ca
#define public_6b752dc _public_6b752dc
#define public_6b752ec _public_6b752ec
#define public_6b75311 _public_6b75311
#define public_6b75322 _public_6b75322

PROC_DECLARE(0x6b75230, internal_6b75230, public_6b75230);
extern "C" NAKED register_t __cdecl internal_6b75230()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, dword ptr ds : [esi+0x120]
        test eax, eax
        je public_6b75295
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        mov edi, eax
        test edi, edi
        jne public_6b7528e
        mov eax, dword ptr ds : [esi+0x120]
        test eax, eax
        je public_6b75282
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x78]
        mov dword ptr ds : [esi+0x11C], eax
        mov eax, edi
        pop edi
        pop esi
        ret 0x18
        public_6b75282 : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [esi+0x11C], eax
        public_6b7528e : nop
        mov eax, edi
        pop edi
        pop esi
        ret 0x18
        public_6b75295 : nop
        cmp dword ptr ss : [esp+0x14], 4
        je public_6b752ad
        public_6b7529c : nop
        mov dword ptr ds : [esi+0x11C], 5
        pop edi
        xor eax, eax
        pop esi
        ret 0x18
        public_6b752ad : nop
        mov ecx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6b752ca
        mov edi, dword ptr ss : [esp+0x10]
        public_6b752bd : nop
        lea edx, ds:[eax+8]
        cmp edx, edi
        je public_6b752dc
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6b752bd
        public_6b752ca : nop
        mov dword ptr ds : [esi+0x11C], 6
        pop edi
        or eax, 0xFFFFFFFF
        pop esi
        ret 0x18
        public_6b752dc : nop
        mov ecx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6b75311
        public_6b752ec : nop
        add eax, 8
        cmp eax, edi
        je public_6b75322
        lea eax, ss:[esp+0x10]
        push 0
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_6b76c30
        mov ecx, dword ptr ds : [esi+0x14C]
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, ecx
        jne public_6b752ec
        public_6b75311 : nop
        mov dword ptr ds : [esi+0x11C], 6
        pop edi
        xor eax, eax
        pop esi
        ret 0x18
        public_6b75322 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_6b75311
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6b7529c
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ss : [esp+0x20]
        sub edx, eax
        cmp edi, edx
        ja public_6b7529c
        pop edi
        add eax, ecx
        pop esi
        ret 0x18
        UNREACHABLE_TRAP(0x6b75230)
    }
}

#undef public_6b75282
#undef public_6b7528e
#undef public_6b75295
#undef public_6b7529c
#undef public_6b752ad
#undef public_6b752bd
#undef public_6b752ca
#undef public_6b752dc
#undef public_6b752ec
#undef public_6b75311
#undef public_6b75322
