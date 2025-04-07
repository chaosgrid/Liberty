#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf220);

PROC_DECLARE(0x6ecf430, internal_6ecf430, public_6ecf430);
extern "C" NAKED register_t __cdecl internal_6ecf430()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6ecf220
        UNREACHABLE_TRAP(0x6ecf430)
    }
}
