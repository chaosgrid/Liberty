#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc70);

PROC_DECLARE(0x620d960, internal_620d960, public_620d960);
extern "C" NAKED register_t __cdecl internal_620d960()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc70
        UNREACHABLE_TRAP(0x620d960)
    }
}
