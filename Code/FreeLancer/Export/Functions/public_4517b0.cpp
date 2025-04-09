#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_45188b _public_45188b
#define public_4518c7 _public_4518c7

PROC_DECLARE(0x4517b0, internal_4517b0, public_4517b0);
extern "C" NAKED register_t __cdecl internal_4517b0()
{
    __asm
    {
        sub esp, 0xB4
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ds : [esi+0x64]
        push edi
        push edx
        push eax
        lea edi, ds:[esi+0x20]
        call dword ptr ds : [ecx+0x90]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c6278]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x64]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x98]
        push eax
        lea edx, ss:[esp+0x78]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_5c627c]
        fld dword ptr ds : [esi+0x80]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x8C]
        lea eax, ds:[esi+0x74]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+8], ecx
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x90]
        mov dword ptr ss : [esp+0xC], edx
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x9C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x88]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+0x94]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi+0xA0]
        fstp dword ptr ss : [esp+0x4C]
        jne public_45188b
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_45188b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_66d11c]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        lea edi, ss:[esp+0x98]
        rep movsd
        pop edi
        pop esi
        jne public_4518c7
        call public_5b73e0
        mov dword ptr ds : [public_66d11c], eax
        public_4518c7 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        lea edx, ss:[esp+0x94]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xBC]
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp]
        fsub dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+8], ecx
        xor eax, eax
        add esp, 0xB4
        ret 8
        UNREACHABLE_TRAP(0x4517b0)
    }
}

#undef public_45188b
#undef public_4518c7
