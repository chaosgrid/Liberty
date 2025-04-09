#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406880);
CLANG_FORWARD_PROC_SYMBOL(public_411350);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4478c0);
CLANG_FORWARD_PROC_SYMBOL(public_447b60);
CLANG_FORWARD_PROC_SYMBOL(public_447bb0);
CLANG_FORWARD_PROC_SYMBOL(public_447be0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_447921 _public_447921
#define public_447a29 _public_447a29
#define public_447ae4 _public_447ae4
#define public_447b35 _public_447b35

PROC_DECLARE(0x4478c0, internal_4478c0, public_4478c0);
extern "C" NAKED register_t __cdecl internal_4478c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        sub esp, 0x1E0
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1F0]
        push eax
        mov ecx, edi
        call dword ptr ds : [public_5c61c4]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_447921
        mov dword ptr ss : [esp+8], 0
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x48], edx
        mov dword ptr ss : [esp+0x4C], eax
        call public_4215b0
        jmp public_447b35
        public_447921 : nop
        push ebx
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c61c0]
        push esi
        mov ecx, edi
        mov ebx, eax
        call dword ptr ds : [public_5c6214]
        mov esi, eax
        mov ecx, 0x12
        lea edi, ss:[esp+0xCC]
        rep movsd
        mov edx, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [esp+0xD8]
        mov ecx, 9
        lea esi, ss:[esp+0xDC]
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xD0]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [public_5c6d90]
        mov dword ptr ss : [esp+0x40], edx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [edx+0xA0]
        mov edx, dword ptr ss : [esp+0x1FC]
        mov esi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edi, eax
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x10]
        push esi
        push ecx
        call public_447be0
        add esp, 0xC
        lea edx, ss:[esp+0x90]
        push edx
        lea ecx, ss:[esp+0x10]
        call public_411350
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+8]
        push eax
        mov eax, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edx
        mov edx, dword ptr ds : [esi+4]
        push eax
        mov eax, dword ptr ds : [esi+0x18]
        push ecx
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        mov edx, dword ptr ds : [esi]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x138]
        call public_447b60
        lea eax, ss:[esp+0x90]
        push eax
        lea ecx, ss:[esp+0x118]
        push ecx
        lea ecx, ss:[esp+0x164]
        call public_447bb0
        mov eax, dword ptr ds : [public_668a98]
        test eax, eax
        pop ebx
        jne public_447a29
        call public_5b73e0
        mov dword ptr ds : [public_668a98], eax
        public_447a29 : nop
        mov edx, dword ptr ds : [eax]
        push edi
        lea ecx, ss:[esp+0x15C]
        push ecx
        lea ecx, ss:[esp+0x1C0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x1B8]
        push edx
        lea ecx, ss:[esp+0x18C]
        call public_406880
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x7C]
        push edx
        call public_447be0
        add esp, 0xC
        lea eax, ss:[esp+0x80]
        push eax
        lea ecx, ss:[esp+0x78]
        call public_411350
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x1C]
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push edx
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edx
        mov edx, dword ptr ss : [esp+0x34]
        push eax
        mov eax, dword ptr ss : [esp+0x2C]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x158]
        call public_447b60
        lea ecx, ss:[esp+0x80]
        push ecx
        lea edx, ss:[esp+0x138]
        push edx
        lea ecx, ss:[esp+0xD0]
        call public_447bb0
        mov eax, dword ptr ds : [public_668a98]
        test eax, eax
        jne public_447ae4
        call public_5b73e0
        mov dword ptr ds : [public_668a98], eax
        public_447ae4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x188]
        push edx
        lea edx, ss:[esp+0xCC]
        push edx
        lea edx, ss:[esp+0xA0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov ecx, dword ptr ss : [esp+0xC0]
        mov eax, dword ptr ss : [esp+0xBC]
        mov edx, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, 9
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x44], eax
        mov dword ptr ss : [esp+0x4C], edx
        rep movsd
        public_447b35 : nop
        mov eax, dword ptr ss : [esp+0x1EC]
        lea esi, ss:[esp+0x44]
        mov edi, eax
        mov ecx, 0xC
        rep movsd
        pop edi
        pop esi
        add esp, 0x1E0
        ret 
        UNREACHABLE_TRAP(0x4478c0)
    }
}

#undef public_447921
#undef public_447a29
#undef public_447ae4
#undef public_447b35
