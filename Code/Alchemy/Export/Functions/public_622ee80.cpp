#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ee80);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x622ee80, internal_622ee80, public_622ee80);
extern "C" NAKED register_t __cdecl internal_622ee80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x622ee80)
    }
}
