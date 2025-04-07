#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6239f80);
CLANG_FORWARD_PROC_SYMBOL(public_623abe0);

PROC_DECLARE(0x623abe0, internal_623abe0, public_623abe0);
extern "C" NAKED register_t __cdecl internal_623abe0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+4], esp
        add ecx, 0xD8
        mov dword ptr ds : [eax], edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_6239f80
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x623abe0)
    }
}
