#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e420);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x620e420, internal_620e420, public_620e420);
extern "C" NAKED register_t __cdecl internal_620e420()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x620e420)
    }
}
