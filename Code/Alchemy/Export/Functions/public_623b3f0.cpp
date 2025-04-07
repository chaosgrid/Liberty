#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3f0);
CLANG_FORWARD_PROC_SYMBOL(public_62443b0);

PROC_DECLARE(0x623b3f0, internal_623b3f0, public_623b3f0);
extern "C" NAKED register_t __cdecl internal_623b3f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_62443b0
        UNREACHABLE_TRAP(0x623b3f0)
    }
}
