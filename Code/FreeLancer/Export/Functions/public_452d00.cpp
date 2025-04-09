#include "Freelancer-PCH.h"

PROC_DECLARE(0x452d00, internal_452d00, public_452d00);
extern "C" NAKED register_t __cdecl internal_452d00()
{
    __asm
    {
        sub esp, 0x18
        fld dword ptr ss : [esp+0x20]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [esi+0x74]
        lea eax, ss:[esp+4]
        fld dword ptr ss : [esp+0x24]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        fstp dword ptr ss : [esp+0x10]
        lea ecx, ds:[esi+0x2C]
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0xC]
        xor eax, eax
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x452d00)
    }
}
