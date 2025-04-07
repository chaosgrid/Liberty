#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6212b00);
CLANG_FORWARD_PROC_SYMBOL(public_62137f0);

PROC_DECLARE(0x62137f0, internal_62137f0, public_62137f0);
extern "C" NAKED register_t __cdecl internal_62137f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_6212b00
        UNREACHABLE_TRAP(0x62137f0)
    }
}
