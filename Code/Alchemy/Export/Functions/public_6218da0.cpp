#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216420);
CLANG_FORWARD_PROC_SYMBOL(public_6218da0);

PROC_DECLARE(0x6218da0, internal_6218da0, public_6218da0);
extern "C" NAKED register_t __cdecl internal_6218da0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6216420
        UNREACHABLE_TRAP(0x6218da0)
    }
}
