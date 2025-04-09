#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_515890);
CLANG_FORWARD_PROC_SYMBOL(public_5416c0);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);

#define public_53c862 _public_53c862
#define public_53c864 _public_53c864
#define public_53c8c0 _public_53c8c0
#define public_53c8f8 _public_53c8f8
#define public_53c930 _public_53c930

PROC_DECLARE(0x53c830, internal_53c830, public_53c830);
extern "C" NAKED register_t __cdecl internal_53c830()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        push esi
        push edi
        call public_54baf0
        test eax, eax
        mov esi, dword ptr ss : [esp+0x34]
        je public_53c8c0
        add eax, 0xC
        test eax, eax
        je public_53c862
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_53c862
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_53c864
        public_53c862 : nop
        xor eax, eax
        public_53c864 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c62e8]
        test eax, eax
        je public_53c8c0
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x28], ecx
        mov cl, byte ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x16], cl
        lea edx, ss:[esp+0x14]
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov byte ptr ss : [esp+0x19], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov byte ptr ss : [esp+0x18], 1
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x10], 4
        call dword ptr ds : [edx]
        public_53c8c0 : nop
        mov edx, dword ptr ds : [esi]
        push 1
        push edx
        call public_5416c0
        mov edi, eax
        add esp, 8
        test edi, edi
        je public_53c8f8
        lea eax, ds:[edi+0xC]
        test eax, eax
        je public_53c8f8
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_53c8f8
        mov eax, dword ptr ds : [ecx+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_53c8f8
        push 1
        call dword ptr ds : [public_5c6a4c]
        public_53c8f8 : nop
        mov ecx, dword ptr ds : [esi+4]
        push 2
        push ecx
        call public_5416c0
        mov edx, dword ptr ds : [esi+8]
        push 2
        push edx
        mov ebp, eax
        call public_5416c0
        add esp, 0x10
        test edi, edi
        je public_53c930
        test ebp, ebp
        je public_53c930
        test eax, eax
        je public_53c930
        xor ecx, ecx
        mov cl, byte ptr ds : [esi+0xC]
        push ecx
        push edi
        push eax
        push ebp
        call public_515890
        add esp, 0x10
        public_53c930 : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x53c830)
    }
}

#undef public_53c862
#undef public_53c864
#undef public_53c8c0
#undef public_53c8f8
#undef public_53c930
