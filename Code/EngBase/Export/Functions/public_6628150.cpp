#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627f60);

PROC_DECLARE(0x6628150, internal_6628150, public_6628150);
extern "C" NAKED register_t __cdecl internal_6628150()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6627f60
        UNREACHABLE_TRAP(0x6628150)
    }
}
