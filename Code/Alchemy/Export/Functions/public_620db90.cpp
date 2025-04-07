#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6204ba0);
CLANG_FORWARD_PROC_SYMBOL(public_620db90);

PROC_DECLARE(0x620db90, internal_620db90, public_620db90);
extern "C" NAKED register_t __cdecl internal_620db90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+0xC]
        add edx, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+4], edx
        jmp public_6204ba0
        UNREACHABLE_TRAP(0x620db90)
    }
}
