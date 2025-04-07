#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4519c9 _public_4519c9

PROC_DECLARE(0x451930, internal_451930, public_451930);
extern "C" NAKED register_t __cdecl internal_451930()
{
    __asm
    {
        sub esp, 0x6C
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0x74]
        mov edx, dword ptr ds : [esi+0x64]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x98]
        push eax
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ds:[esi+0x20]
        call dword ptr ds : [public_5c627c]
        fld dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x98]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x84]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x90]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [esi+0x9C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x88]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0x94]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0xA0]
        fstp dword ptr ss : [esp+0x28]
        jne public_4519c9
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_4519c9 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edi, dword ptr ss : [esp+0x7C]
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x6C
        ret 8
        UNREACHABLE_TRAP(0x451930)
    }
}

#undef public_4519c9
