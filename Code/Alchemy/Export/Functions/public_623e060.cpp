#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623d640);
CLANG_FORWARD_PROC_SYMBOL(public_623e060);

PROC_DECLARE(0x623e060, internal_623e060, public_623e060);
extern "C" NAKED register_t __cdecl internal_623e060()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_623d640
        UNREACHABLE_TRAP(0x623e060)
    }
}
