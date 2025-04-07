#include "x86math-PCH.h"

PROC_DECLARE(0x6f721c0, internal_6f721c0, public_6f721c0);
extern "C" NAKED register_t __cdecl internal_6f721c0()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x80]
        mov ebx, dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+8]
        push edi
        fld dword ptr ds : [esi+0x24]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [esi+0x28]
        fchs 
        mov eax, dword ptr ds : [ebx]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi+0x2C]
        lea edx, ss:[esp+0x1C]
        push esi
        fchs 
        push edx
        push ebx
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [eax+0x38]
        fld dword ptr ds : [esi]
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
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, 9
        fstp dword ptr ss : [esp+0x44]
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x48]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x70], ecx
        mov ecx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x74], edx
        mov edx, dword ptr ss : [esp+0x88]
        push ecx
        push edx
        mov edx, dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x50]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ds : [ebx]
        push ecx
        push edx
        push ebx
        call dword ptr ds : [eax+0x40]
        pop edi
        pop esi
        pop ebx
        add esp, 0x6C
        ret 0x14
        UNREACHABLE_TRAP(0x6f721c0)
    }
}
