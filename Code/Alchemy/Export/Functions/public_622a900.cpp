#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62281c0);
CLANG_FORWARD_PROC_SYMBOL(public_622a900);

PROC_DECLARE(0x622a900, internal_622a900, public_622a900);
extern "C" NAKED register_t __cdecl internal_622a900()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_62281c0
        UNREACHABLE_TRAP(0x622a900)
    }
}
