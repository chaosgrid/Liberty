#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219620);
CLANG_FORWARD_PROC_SYMBOL(public_62443b0);

PROC_DECLARE(0x6219620, internal_6219620, public_6219620);
extern "C" NAKED register_t __cdecl internal_6219620()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_62443b0
        UNREACHABLE_TRAP(0x6219620)
    }
}
