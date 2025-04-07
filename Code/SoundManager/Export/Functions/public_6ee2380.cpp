#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2380, internal_6ee2380, public_6ee2380);
extern "C" NAKED register_t __cdecl internal_6ee2380()
{
    __asm
    {
        sub esp, 0x18
        mov eax, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+4]
        lea edx, ss:[esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+0x10]
        push edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x1C]
        lea edx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+8]
        push edx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        push eax
        call dword ptr ds : [ecx+0x34]
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6ee2380)
    }
}
