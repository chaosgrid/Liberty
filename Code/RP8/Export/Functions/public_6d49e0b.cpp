#include "RP8-PCH.h"

PROC_DECLARE(0x6d49e0b, internal_6d49e0b, public_6d49e0b);
extern "C" NAKED register_t __cdecl internal_6d49e0b()
{
    __asm
    {
        push dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        push dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax+0x188]
        push dword ptr ss : [esp+0x10]
        xor ecx, ecx
        push ecx
        push ecx
        push ecx
        push eax
        call dword ptr ds : [edx+4]
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d49e0b)
    }
}
