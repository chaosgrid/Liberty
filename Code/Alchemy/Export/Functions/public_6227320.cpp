#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6227320);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x6227320, internal_6227320, public_6227320);
extern "C" NAKED register_t __cdecl internal_6227320()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x6227320)
    }
}
