#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e3a0);

PROC_DECLARE(0x620d820, internal_620d820, public_620d820);
extern "C" NAKED register_t __cdecl internal_620d820()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e3a0
        UNREACHABLE_TRAP(0x620d820)
    }
}
