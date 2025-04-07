#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc00);

PROC_DECLARE(0x620d930, internal_620d930, public_620d930);
extern "C" NAKED register_t __cdecl internal_620d930()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc00
        UNREACHABLE_TRAP(0x620d930)
    }
}
