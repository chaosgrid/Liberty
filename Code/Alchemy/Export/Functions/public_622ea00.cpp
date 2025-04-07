#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622bbc0);
CLANG_FORWARD_PROC_SYMBOL(public_622ea00);

PROC_DECLARE(0x622ea00, internal_622ea00, public_622ea00);
extern "C" NAKED register_t __cdecl internal_622ea00()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_622bbc0
        UNREACHABLE_TRAP(0x622ea00)
    }
}
