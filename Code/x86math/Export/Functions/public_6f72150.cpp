#include "x86math-PCH.h"

PROC_DECLARE(0x6f72150, internal_6f72150, public_6f72150);
extern "C" NAKED register_t __cdecl internal_6f72150()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xC]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+0x18]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+0x1C]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [eax+0x14]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ss : [esp+0x2C]
        push edx
        lea edx, ss:[esp+8]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push edx
        push eax
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [ecx+0x44]
        add esp, 0x24
        ret 0x14
        UNREACHABLE_TRAP(0x6f72150)
    }
}
