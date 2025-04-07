#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346bb0);

PROC_DECLARE(0x6284240, internal_6284240, public_6284240);
extern "C" NAKED register_t __cdecl internal_6284240()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax]
        lea edx, ss:[esp]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        push edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [eax+0x54]
        fstp dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x98]
        fld dword ptr ds : [ecx+0x20]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x98]
        call public_6346bb0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6284240)
    }
}
