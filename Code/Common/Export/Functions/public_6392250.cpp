#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6392250);

PROC_DECLARE(0x6392250, internal_6392250, public_6392250);
extern "C" NAKED register_t __cdecl internal_6392250()
{
    __asm
    {
        mov eax, 0x1000
        call public_6391dc0
        mov ecx, dword ptr ss : [esp+0x100C]
        lea eax, ss:[esp+0x1010]
        push eax
        push ecx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_63991f4]
        mov ecx, dword ptr ss : [esp+0x1010]
        mov eax, dword ptr ds : [ecx]
        add esp, 0xC
        lea edx, ss:[esp]
        push edx
        mov edx, dword ptr ss : [esp+0x100C]
        push edx
        call dword ptr ds : [eax]
        add esp, 0x1000
        ret 
        UNREACHABLE_TRAP(0x6392250)
    }
}
