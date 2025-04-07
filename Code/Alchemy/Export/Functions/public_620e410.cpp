#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e410);
CLANG_FORWARD_PROC_SYMBOL(public_62443b0);

PROC_DECLARE(0x620e410, internal_620e410, public_620e410);
extern "C" NAKED register_t __cdecl internal_620e410()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_62443b0
        UNREACHABLE_TRAP(0x620e410)
    }
}
