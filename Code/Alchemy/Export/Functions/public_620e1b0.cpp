#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62050c0);
CLANG_FORWARD_PROC_SYMBOL(public_620e1b0);

PROC_DECLARE(0x620e1b0, internal_620e1b0, public_620e1b0);
extern "C" NAKED register_t __cdecl internal_620e1b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_62050c0
        UNREACHABLE_TRAP(0x620e1b0)
    }
}
