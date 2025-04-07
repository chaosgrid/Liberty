#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6225000);
CLANG_FORWARD_PROC_SYMBOL(public_6227170);

PROC_DECLARE(0x6227170, internal_6227170, public_6227170);
extern "C" NAKED register_t __cdecl internal_6227170()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6225000
        UNREACHABLE_TRAP(0x6227170)
    }
}
