#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b400);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x623b400, internal_623b400, public_623b400);
extern "C" NAKED register_t __cdecl internal_623b400()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x623b400)
    }
}
