#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622b8a0);
CLANG_FORWARD_PROC_SYMBOL(public_622e700);

PROC_DECLARE(0x622e700, internal_622e700, public_622e700);
extern "C" NAKED register_t __cdecl internal_622e700()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_622b8a0
        UNREACHABLE_TRAP(0x622e700)
    }
}
