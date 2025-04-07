#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b10);

PROC_DECLARE(0x6ed0b10, internal_6ed0b10, public_6ed0b10);
extern "C" NAKED register_t __cdecl internal_6ed0b10()
{
    __asm
    {
        sub esp, 0x10
        mov dword ptr ss : [esp+8], offset public_6ed51c8
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+4], 0xC
        call dword ptr ds : [public_6ed1008]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp]
        push edx
        lea edx, ss:[esp+8]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ss : [esp]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ed0b10)
    }
}
