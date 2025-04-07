#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620f600);
CLANG_FORWARD_PROC_SYMBOL(public_6212270);

PROC_DECLARE(0x6212270, internal_6212270, public_6212270);
extern "C" NAKED register_t __cdecl internal_6212270()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_620f600
        UNREACHABLE_TRAP(0x6212270)
    }
}
