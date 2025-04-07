#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b7d0);
CLANG_FORWARD_PROC_SYMBOL(public_620dde0);

PROC_DECLARE(0x620dde0, internal_620dde0, public_620dde0);
extern "C" NAKED register_t __cdecl internal_620dde0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ss : [esp+8]
        push ecx
        mov eax, esp
        mov dword ptr ss : [esp+4], esp
        add ecx, 0xE4
        mov dword ptr ds : [eax], edx
        lea eax, ss:[esp+0xC]
        push eax
        call public_620b7d0
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x620dde0)
    }
}
