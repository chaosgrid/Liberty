#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_556ac0 _public_556ac0

PROC_DECLARE(0x556aa0, internal_556aa0, public_556aa0);
extern "C" NAKED register_t __cdecl internal_556aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6799bc]
        sub esp, 0x6C
        test eax, eax
        push ebx
        mov ebx, dword ptr ss : [esp+0x74]
        push esi
        push edi
        lea esi, ds:[ebx+0x5C]
        jne public_556ac0
        call public_5b73e0
        mov dword ptr ds : [public_6799bc], eax
        public_556ac0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        fchs 
        lea edi, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x20]
        lea esi, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x6C], eax
        lea eax, ds:[ebx+0x8C]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov edi, eax
        mov dword ptr ss : [esp+0x74], edx
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x556aa0)
    }
}

#undef public_556ac0
