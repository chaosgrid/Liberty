#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_451ade _public_451ade
#define public_451b1b _public_451b1b

PROC_DECLARE(0x451a00, internal_451a00, public_451a00);
extern "C" NAKED register_t __cdecl internal_451a00()
{
    __asm
    {
        sub esp, 0xB4
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ds : [esi+0x70]
        push edi
        push edx
        push eax
        lea edi, ds:[esi+0x2C]
        call dword ptr ds : [ecx+0x90]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6278]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x70]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        push eax
        lea edx, ss:[esp+0x78]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c627c]
        fld dword ptr ds : [esi+0x8C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x98]
        lea eax, ds:[esi+0x80]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0xA4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x90]
        mov dword ptr ss : [esp+8], ecx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x9C]
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0xA8]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x94]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+0xA0]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+0x4C]
        jne public_451ade
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_451ade : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x50]
        rep movsd
        jne public_451b1b
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_451b1b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x54]
        push edx
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0xC4]
        lea eax, ds:[edi+0x24]
        lea esi, ss:[esp+0x50]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0xB4
        ret 8
        UNREACHABLE_TRAP(0x451a00)
    }
}

#undef public_451ade
#undef public_451b1b
