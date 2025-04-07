#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);

PROC_DECLARE(0x6f4cf50, internal_6f4cf50, public_6f4cf50);
extern "C" NAKED register_t __cdecl internal_6f4cf50()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_6fb3618]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+8]
        push 1
        push edx
        push eax
        push ecx
        call public_6f50c50
        add esp, 0x1C
        ret 0xC
        UNREACHABLE_TRAP(0x6f4cf50)
    }
}
