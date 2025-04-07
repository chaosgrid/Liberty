#include "ImeUi-PCH.h"

PROC_DECLARE(0x6712950, internal_6712950, public_6712950);
extern "C" NAKED register_t __cdecl internal_6712950()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        lea ecx, ss:[esp+8]
        push eax
        push 1
        push ecx
        push 1
        push 0x800
        mov dword ptr ss : [esp+0x14], 0
        call dword ptr ds : [public_671935c]
        mov al, byte ptr ss : [esp]
        not al
        shr eax, 5
        and eax, 1
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6712950)
    }
}
