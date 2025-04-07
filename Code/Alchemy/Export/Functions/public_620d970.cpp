#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dc80);

PROC_DECLARE(0x620d970, internal_620d970, public_620d970);
extern "C" NAKED register_t __cdecl internal_620d970()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_620dc80
        UNREACHABLE_TRAP(0x620d970)
    }
}
