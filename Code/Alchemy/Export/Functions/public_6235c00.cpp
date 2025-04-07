#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235c00);
CLANG_FORWARD_PROC_SYMBOL(public_6244510);

PROC_DECLARE(0x6235c00, internal_6235c00, public_6235c00);
extern "C" NAKED register_t __cdecl internal_6235c00()
{
    __asm
    {
        add ecx, 0xC
        jmp public_6244510
        UNREACHABLE_TRAP(0x6235c00)
    }
}
