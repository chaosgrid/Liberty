#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e040);

PROC_DECLARE(0x620d760, internal_620d760, public_620d760);
extern "C" NAKED register_t __cdecl internal_620d760()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620e040
        UNREACHABLE_TRAP(0x620d760)
    }
}
