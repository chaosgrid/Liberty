#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e310);

PROC_DECLARE(0x620d890, internal_620d890, public_620d890);
extern "C" NAKED register_t __cdecl internal_620d890()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e310
        UNREACHABLE_TRAP(0x620d890)
    }
}
