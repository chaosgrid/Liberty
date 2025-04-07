#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285770);
CLANG_FORWARD_PROC_SYMBOL(public_63460c0);

PROC_DECLARE(0x6285770, internal_6285770, public_6285770);
extern "C" NAKED register_t __cdecl internal_6285770()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+0x54]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp]
        fstp dword ptr ss : [esp+8]
        push eax
        call public_63460c0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6285770)
    }
}
