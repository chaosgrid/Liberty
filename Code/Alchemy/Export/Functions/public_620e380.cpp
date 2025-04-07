#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e380);
CLANG_FORWARD_PROC_SYMBOL(public_6244510);

PROC_DECLARE(0x620e380, internal_620e380, public_620e380);
extern "C" NAKED register_t __cdecl internal_620e380()
{
    __asm
    {
        add ecx, 0xC
        jmp public_6244510
        UNREACHABLE_TRAP(0x620e380)
    }
}
