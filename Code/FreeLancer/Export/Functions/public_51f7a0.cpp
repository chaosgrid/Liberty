#include "FreeLancer-PCH.h"

PROC_DECLARE(0x51f7a0, internal_51f7a0, public_51f7a0);
extern "C" NAKED register_t __cdecl internal_51f7a0()
{
    __asm
    {
        push 0
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea eax, ss:[esp+0x14]
        push eax
        call dword ptr ds : [edx+0x188]
        ret 4
        UNREACHABLE_TRAP(0x51f7a0)
    }
}
