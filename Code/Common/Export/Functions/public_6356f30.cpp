#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63461a0);
CLANG_FORWARD_PROC_SYMBOL(public_6356f30);

PROC_DECLARE(0x6356f30, internal_6356f30, public_6356f30);
extern "C" NAKED register_t __cdecl internal_6356f30()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [esi+0xF4]
        lea ecx, ds:[esi+0x24]
        push ecx
        mov ecx, dword ptr ds : [esi+0xEC]
        lea edx, ds:[esi+0x44]
        push edx
        push eax
        call public_63461a0
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+0xF8]
        lea edx, ds:[esi+0x34]
        push edx
        lea eax, ds:[esi+0x54]
        push eax
        push ecx
        mov ecx, dword ptr ds : [esi+0xF0]
        call public_63461a0
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [esi+0xA4]
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x18]
        fstp dword ptr ds : [esi+0xA8]
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ds : [esi+0xAC]
        pop esi
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6356f30)
    }
}
