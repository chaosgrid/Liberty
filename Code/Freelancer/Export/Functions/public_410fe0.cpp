#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410fe0);
CLANG_FORWARD_PROC_SYMBOL(public_411370);

#define public_411023 _public_411023
#define public_41104a _public_41104a
#define public_411084 _public_411084
#define public_4110aa _public_4110aa

PROC_DECLARE(0x410fe0, internal_410fe0, public_410fe0);
extern "C" NAKED register_t __cdecl internal_410fe0()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        lea ecx, ds:[esi+0x24]
        push edi
        mov edi, dword ptr ds : [ecx]
        lea eax, ss:[ebp+0x98]
        mov edx, eax
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        cmp dword ptr ss : [ebp+0xB0], 3
        je public_411023
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0x40], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+0x44], ecx
        fld dword ptr ds : [eax+8]
        fchs 
        fstp dword ptr ss : [ebp+0x48]
        public_411023 : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_41104a
        test byte ptr ss : [ebp+0xB4], 4
        je public_41104a
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x12C]
        public_41104a : nop
        cmp dword ptr ss : [ebp+0xB0], 1
        lea edi, ss:[ebp+0x74]
        mov ecx, 9
        rep movsd
        je public_411084
        push 0
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, ebp
        call public_411370
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        fchs 
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [ebp+0x54]
        mov dword ptr ss : [ebp+0x4C], ecx
        mov dword ptr ss : [ebp+0x50], edx
        public_411084 : nop
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_4110aa
        test byte ptr ss : [ebp+0xB4], 4
        je public_4110aa
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add ebp, 0xC
        push ebp
        push eax
        call dword ptr ds : [ecx+0x12C]
        public_4110aa : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x410fe0)
    }
}

#undef public_411023
#undef public_41104a
#undef public_411084
#undef public_4110aa
