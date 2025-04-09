#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54bb00);

#define public_5467f9 _public_5467f9
#define public_546839 _public_546839
#define public_54685f _public_54685f
#define public_546861 _public_546861
#define public_5468b0 _public_5468b0
#define public_5468b2 _public_5468b2
#define public_5468d3 _public_5468d3

PROC_DECLARE(0x5467e0, internal_5467e0, public_5467e0);
extern "C" NAKED register_t __cdecl internal_5467e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, 0xFFFFFFFF
        push edi
        mov edi, ecx
        je public_5467f9
        call public_54bb00
        cmp esi, eax
        jne public_546839
        public_5467f9 : nop
        mov eax, dword ptr ds : [edi-4]
        lea ecx, ds:[edi-4]
        call dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [esp+0x1C]
        mov cx, word ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+8]
        mov word ptr ss : [esp+0xC], cx
        mov ecx, dword ptr ds : [public_67ecd0]
        push edx
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x20]
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 0xC
        public_546839 : nop
        lea esi, ds:[edi-4]
        test esi, esi
        je public_54685f
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_54685f
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_54685f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        je public_546861
        public_54685f : nop
        xor eax, eax
        public_546861 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_5c6574]
        push eax
        call dword ptr ds : [public_5c69a4]
        add esp, 4
        test eax, eax
        je public_5468d3
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [public_5c694c]
        test esi, esi
        je public_5468b0
        lea eax, ds:[esi+0xC]
        test eax, eax
        je public_5468b0
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_5468b0
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_5468b2
        public_5468b0 : nop
        xor eax, eax
        public_5468b2 : nop
        mov ecx, eax
        call dword ptr ds : [public_5c6b10]
        inc dword ptr ds : [edi+0xE4]
        mov eax, dword ptr ds : [public_5c6b0c]
        fadd dword ptr ds : [eax]
        fadd dword ptr ds : [edi+0xE0]
        fstp dword ptr ds : [edi+0xE0]
        public_5468d3 : nop
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x5467e0)
    }
}

#undef public_5467f9
#undef public_546839
#undef public_54685f
#undef public_546861
#undef public_5468b0
#undef public_5468b2
#undef public_5468d3
