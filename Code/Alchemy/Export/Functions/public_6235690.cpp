#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6234750);
CLANG_FORWARD_PROC_SYMBOL(public_6235690);

PROC_DECLARE(0x6235690, internal_6235690, public_6235690);
extern "C" NAKED register_t __cdecl internal_6235690()
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
        call public_6234750
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6235690)
    }
}
