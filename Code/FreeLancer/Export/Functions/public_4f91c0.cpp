#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4f91e9 _public_4f91e9
#define public_4f9225 _public_4f9225
#define public_4f923b _public_4f923b
#define public_4f923e _public_4f923e

PROC_DECLARE(0x4f91c0, internal_4f91c0, public_4f91c0);
extern "C" NAKED register_t __cdecl internal_4f91c0()
{
    __asm
    {
        sub esp, 0x64
        push esi
        push edi
        mov edi, ecx
        fld dword ptr ds : [edi+0x84]
        fmul dword ptr ds : [edi+0x74]
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5d49b0]
        fnstsw ax
        test ah, 5
        jp public_4f91e9
        mov dword ptr ss : [esp+8], 0x41200000
        public_4f91e9 : nop
        mov eax, dword ptr ds : [edi+0x44]
        test eax, eax
        je public_4f923b
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4f923b
        mov ecx, dword ptr ds : [edi+0x40]
        cmp ecx, 0xFFFFFFFF
        je public_4f923b
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_674f50]
        test eax, eax
        jne public_4f9225
        call public_5b73e0
        mov dword ptr ds : [public_674f50], eax
        public_4f9225 : nop
        mov ecx, dword ptr ds : [eax]
        add edi, 0x10
        push edi
        push esi
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea esi, ss:[esp+0x3C]
        jmp public_4f923e
        public_4f923b : nop
        lea esi, ds:[edi+0x10]
        public_4f923e : nop
        mov eax, dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+8]
        lea edi, ss:[esp+0xC]
        mov ecx, 0xC
        rep movsd
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], edx
        pop edi
        mov dword ptr ds : [eax+8], ecx
        pop esi
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x4f91c0)
    }
}

#undef public_4f91e9
#undef public_4f9225
#undef public_4f923b
#undef public_4f923e
