#include "Common-PCH.h"

PROC_DECLARE(0x630b680, internal_630b680, public_630b680);
extern "C" NAKED register_t __cdecl internal_630b680()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0x14]
        push 0
        push 0
        lea eax, ss:[esp+0x1C]
        push eax
        push 0x400
        push ecx
        push 0
        push 0x1300
        call dword ptr ds : [public_63990f0]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ds : [public_6399028]
        and eax, 0xF
        or eax, 0x100000
        push ecx
        push eax
        call dword ptr ds : [edx]
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 0x14
        push eax
        call dword ptr ds : [public_63990f4]
        ret 
        UNREACHABLE_TRAP(0x630b680)
    }
}
