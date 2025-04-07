#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);

PROC_DECLARE(0x6f4f7a0, internal_6f4f7a0, public_6f4f7a0);
extern "C" NAKED register_t __cdecl internal_6f4f7a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        sub esp, 0x1F4
        lea eax, ss:[esp+0x1FC]
        push eax
        push ecx
        lea edx, ss:[esp+8]
        push edx
        call dword ptr ds : [public_6f5a0cc]
        lea eax, ss:[esp+0xC]
        push eax
        call public_6f4c7f0
        add esp, 0x204
        ret 
        UNREACHABLE_TRAP(0x6f4f7a0)
    }
}
