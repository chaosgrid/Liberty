#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f50ea0);

PROC_DECLARE(0x6f50ea0, internal_6f50ea0, public_6f50ea0);
extern "C" NAKED register_t __cdecl internal_6f50ea0()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0xC], 0
        call dword ptr ds : [public_6fb35e8]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0xC]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f50ea0)
    }
}
