#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ba50);
CLANG_FORWARD_PROC_SYMBOL(public_623c390);

PROC_DECLARE(0x623c390, internal_623c390, public_623c390);
extern "C" NAKED register_t __cdecl internal_623c390()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_623ba50
        UNREACHABLE_TRAP(0x623c390)
    }
}
