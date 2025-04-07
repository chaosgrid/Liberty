#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62126f0);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x62126f0, internal_62126f0, public_62126f0);
extern "C" NAKED register_t __cdecl internal_62126f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x62126f0)
    }
}
