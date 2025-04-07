#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622f8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6231f40);

PROC_DECLARE(0x6231f40, internal_6231f40, public_6231f40);
extern "C" NAKED register_t __cdecl internal_6231f40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_622f8b0
        UNREACHABLE_TRAP(0x6231f40)
    }
}
