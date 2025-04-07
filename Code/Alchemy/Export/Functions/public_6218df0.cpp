#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215d80);
CLANG_FORWARD_PROC_SYMBOL(public_6218df0);

PROC_DECLARE(0x6218df0, internal_6218df0, public_6218df0);
extern "C" NAKED register_t __cdecl internal_6218df0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6215d80
        UNREACHABLE_TRAP(0x6218df0)
    }
}
