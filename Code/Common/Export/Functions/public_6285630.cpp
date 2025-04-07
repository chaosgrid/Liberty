#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285630);
CLANG_FORWARD_PROC_SYMBOL(public_6346100);

PROC_DECLARE(0x6285630, internal_6285630, public_6285630);
extern "C" NAKED register_t __cdecl internal_6285630()
{
    __asm
    {
        sub esp, 0x20
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp]
        push eax
        push ecx
        mov ecx, dword ptr ds : [edx+0x54]
        fstp dword ptr ss : [esp+0x20]
        call public_6346100
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6285630)
    }
}
