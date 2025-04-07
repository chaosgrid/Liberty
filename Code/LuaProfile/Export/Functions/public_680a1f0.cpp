#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68023d0);
CLANG_FORWARD_PROC_SYMBOL(public_680a1f0);

PROC_DECLARE(0x680a1f0, internal_680a1f0, public_680a1f0);
extern "C" NAKED register_t __cdecl internal_680a1f0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp]
        push ecx
        mov dword ptr ss : [esp+4], 0xFFFFFFFE
        mov dword ptr ss : [esp+0xC], eax
        call public_68023d0
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x680a1f0)
    }
}
