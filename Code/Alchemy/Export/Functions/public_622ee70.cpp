#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee70);
CLANG_FORWARD_PROC_SYMBOL(public_62443b0);

PROC_DECLARE(0x622ee70, internal_622ee70, public_622ee70);
extern "C" NAKED register_t __cdecl internal_622ee70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_62443b0
        UNREACHABLE_TRAP(0x622ee70)
    }
}
