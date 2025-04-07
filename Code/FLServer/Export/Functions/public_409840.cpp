#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_409840);

PROC_DECLARE(0x409840, internal_409840, public_409840);
extern "C" NAKED register_t __cdecl internal_409840()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        push 0x461
        push edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0x4B0
        call dword ptr ds : [public_41bbe8]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x409840)
    }
}
