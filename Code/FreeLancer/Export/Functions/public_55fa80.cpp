#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

PROC_DECLARE(0x55fa80, internal_55fa80, public_55fa80);
extern "C" NAKED register_t __cdecl internal_55fa80()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, ecx
        fld dword ptr ds : [eax+0x60]
        push esi
        fadd dword ptr ds : [eax+0xA8]
        push edi
        lea esi, ds:[eax+0x3C]
        mov ecx, 9
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x64]
        lea edi, ss:[esp+0x14]
        fadd dword ptr ds : [eax+0xAC]
        rep movsd
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x38], ecx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0x68]
        mov dword ptr ss : [esp+0x3C], edx
        fadd dword ptr ds : [eax+0xB0]
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x44], ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ds:[eax+0xB4]
        call public_5a1130
        pop edi
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x55fa80)
    }
}
