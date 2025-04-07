#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc60);

PROC_DECLARE(0x620d950, internal_620d950, public_620d950);
extern "C" NAKED register_t __cdecl internal_620d950()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc60
        UNREACHABLE_TRAP(0x620d950)
    }
}
