#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622bed0);
CLANG_FORWARD_PROC_SYMBOL(public_622eca0);

PROC_DECLARE(0x622eca0, internal_622eca0, public_622eca0);
extern "C" NAKED register_t __cdecl internal_622eca0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_622bed0
        UNREACHABLE_TRAP(0x622eca0)
    }
}
