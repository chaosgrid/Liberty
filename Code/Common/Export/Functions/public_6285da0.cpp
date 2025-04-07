#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285da0);
CLANG_FORWARD_PROC_SYMBOL(public_6346c80);

PROC_DECLARE(0x6285da0, internal_6285da0, public_6285da0);
extern "C" NAKED register_t __cdecl internal_6285da0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        push edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        lea eax, ss:[esp+4]
        fstp dword ptr ss : [esp+0xC]
        push eax
        call public_6346c80
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6285da0)
    }
}
