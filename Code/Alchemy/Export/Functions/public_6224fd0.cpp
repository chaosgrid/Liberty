#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6224fd0);
CLANG_FORWARD_PROC_SYMBOL(public_62257f0);

PROC_DECLARE(0x6224fd0, internal_6224fd0, public_6224fd0);
extern "C" NAKED register_t __cdecl internal_6224fd0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+4], esp
        add ecx, 0xB4
        mov dword ptr ds : [eax], edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_62257f0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6224fd0)
    }
}
