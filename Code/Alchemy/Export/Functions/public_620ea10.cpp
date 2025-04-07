#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e510);
CLANG_FORWARD_PROC_SYMBOL(public_620ea10);

PROC_DECLARE(0x620ea10, internal_620ea10, public_620ea10);
extern "C" NAKED register_t __cdecl internal_620ea10()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_620e510
        UNREACHABLE_TRAP(0x620ea10)
    }
}
