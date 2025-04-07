#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802e00);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

PROC_DECLARE(0x6805fb0, internal_6805fb0, public_6805fb0);
extern "C" NAKED register_t __cdecl internal_6805fb0()
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
        call dword ptr ds : [public_680c06c]
        lea eax, ss:[esp+0xC]
        push eax
        call public_6802e00
        UNREACHABLE_TRAP(0x6805fb0)
    }
}
